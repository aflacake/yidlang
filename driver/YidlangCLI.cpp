#include "YidlangCLI.hpp"

#include "../source/SourceDocument.hpp"
#include "../syntax/ASTBuilder.hpp"
#include "../legitimacy/StaticLegitimacy.hpp"
#include "../ledger/DecisionLedger.hpp"
#include "../traversal/AwarenessPass.hpp"
#include "../traversal/EvaluationPass.hpp"
#include "../traversal/ResolutionPass.hpp"
#include "../gate/ExecutionGate.hpp"
#include "../diagnostic/DiagnosticEngine.hpp"

#include <iostream>

int YidlangCLI::run(const std::string& path) {
    // 1. Load source (program as a whole)
    SourceDocument source(path);

    // 2. Build AST (structure only)
    ASTBuilder builder;
    ProgramNode program = builder.build(source);

    // 3. Static legitimacy scan (no ledger)
    StaticLegitimacy legitimacy;
    legitimacy.scan(program);

    // 4. Prepare ethical state
    DecisionLedger ledger;

    // 5. Traversal phases (ledger-driven)
    AwarenessPass awareness;
    EvaluationPass evaluation;
    ResolutionPass resolution;

    awareness.run(program, ledger);
    evaluation.run(program, ledger);
    resolution.run(program, ledger);

    // 6. Final decision gate
    ExecutionGate gate;
    auto state = gate.evaluate(legitimacy, ledger);

    // 7. Diagnostic only (no runtime)
    DiagnosticEngine diagnostic;
    auto message = diagnostic.generate(state, ledger);
	
	if (!message.text.empty()) {

		switch (message.sheym) {
			case DiagnosticSheym::Emes:
				std::cout << "Emes:\n";
				break;

			case DiagnosticSheym::Shtil:
				std::cout << "Shtil:\n";
				break;
		}

		std::cout << message.text << "\n";
	}

    // (Printing/output intentionally omitted)

    return 0;
}