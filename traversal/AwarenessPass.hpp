#pragma once
#include "../syntax/AST.hpp"
#include "../ledger/DecisionLedger.hpp"

class AwarenessPass {
public:
    void run(const ProgramNode& program, DecisionLedger& ledger);
};