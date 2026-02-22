#pragma once
#include "LedgerTypes.hpp"
#include <vector>
#include <string>

struct LedgerEntry {
    std::string name;
    EntitetTip type;
    Matsev state;
    std::vector<Matsev> history;
};