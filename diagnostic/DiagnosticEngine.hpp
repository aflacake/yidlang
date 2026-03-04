#pragma once
#include "../gate/ExecutionGate.hpp"
#include "../ledger/DecisionLedger.hpp"
#include <string>
#include <optional>

enum class DiagnosticSheym {
    Emes,
    Shtil
};

struct Diagnostic {
    DiagnosticSheym sheym;
    std::string text;
    std::optional<int> code; // untuk masa depan
};

class DiagnosticEngine {
public:
    Diagnostic generate(
        ProgramMatsev state,
        const DecisionLedger& ledger
    ) const;
};