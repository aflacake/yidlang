#pragma once
#include "../syntax/AST.hpp"

class StaticLegitimacy {
public:
    void scan(const ProgramNode& program);
    bool isRejected() const;
};