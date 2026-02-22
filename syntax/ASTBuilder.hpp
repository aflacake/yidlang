#pragma once
#include "AST.hpp"
#include "../source/SourceDocument.hpp"

class ASTBuilder {
public:
    ProgramNode build(const SourceDocument& source);
};