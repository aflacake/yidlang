#pragma once
#include "../ledger/DecisionLedger.hpp"
#include "../legitimacy/StaticLegitimacy.hpp"

enum class ProgramMatsev {
    muter,
    opgehaltn
};

class ExecutionGate {
public:
    ProgramMatsev evaluate(
        const StaticLegitimacy& legitimacy,
        const DecisionLedger& ledger
    ) const;
};