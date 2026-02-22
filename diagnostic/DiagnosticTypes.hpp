#pragma once
#include <string>
#include <optional>

enum class DiagnosticSheym;

struct Diagnostic {
    DiagnosticSheym sheym;
    std::string text;
    std::optional<std::string> context;
};