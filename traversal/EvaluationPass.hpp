#pragma once
#include "../syntax/AST.hpp"
#include "../ledger/DecisionLedger.hpp"

class EvaluationPass {
public:
    void run(const ProgramNode& program, DecisionLedger& ledger);
};