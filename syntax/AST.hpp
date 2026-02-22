#pragma once
#include <vector>
#include <memory>

struct ASTNode {
    virtual ~ASTNode() = default;
};

struct ProgramNode : ASTNode {
    std::vector<std::unique_ptr<ASTNode>> statements;
};