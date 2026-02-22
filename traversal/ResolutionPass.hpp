#pragma once
#include "../syntax/AST.hpp"
#include "../ledger/DecisionLedger.hpp"

class ResolutionPass {
public:
    void run(const ProgramNode& program, DecisionLedger& ledger);
};