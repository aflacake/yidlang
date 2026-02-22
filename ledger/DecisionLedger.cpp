#include "DecisionLedger.hpp"

void DecisionLedger::openInyen(const std::string&) {}
void DecisionLedger::trakht(const std::string&) {}
void DecisionLedger::farshtey(const std::string&) {}
void DecisionLedger::shoyn(const std::string&) {}
void DecisionLedger::ibertrakht(const std::string&) {}
void DecisionLedger::oyshern(const std::string&) {}
void DecisionLedger::emunah(const std::string&) {}
void DecisionLedger::psak(const std::string&) {}
void DecisionLedger::nisht(const std::string&) {}

bool DecisionLedger::hasOpenInyen() const {
    return false;
}

bool DecisionLedger::isBlocked() const {
    return false;
}