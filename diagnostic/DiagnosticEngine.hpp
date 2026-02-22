#pragma once
#include "../gate/ExecutionGate.hpp"
#include "../ledger/DecisionLedger.hpp"

class DiagnosticEngine {
public:
    Diagnostic generate(
        ProgramMatsev state,
        const DecisionLedger& ledger
    ) const;
};