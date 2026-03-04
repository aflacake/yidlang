#include "DecisionLedger.hpp"

void DecisionLedger::openInyen(const std::string&) {}

void DecisionLedger::trakht(const std::string& name) {
    inyenStates[name] = InyenState::Opened;
}

void DecisionLedger::farshtey(const std::string& name) {
    if (inyenStates[name] == InyenState::Opened)
        inyenStates[name] = InyenState::Understood;
}

void DecisionLedger::shoyn(const std::string& name) {
    if (inyenStates[name] == InyenState::Understood)
        inyenStates[name] = InyenState::Acknowledged;
}

void DecisionLedger::ibertrakht(const std::string&) {}

void DecisionLedger::oyshern(const std::string& name) {
    if (inyenStates[name] == InyenState::Acknowledged)
        inyenStates[name] = InyenState::Reviewed;
}

void DecisionLedger::emunah(const std::string& name) {
    if (inyenStates[name] == InyenState::Reviewed)
        inyenStates[name] = InyenState::Trusted;
}

void DecisionLedger::psak(const std::string& name) {
    if (inyenStates[name] == InyenState::Trusted)
        inyenStates[name] = InyenState::Locked;
}

void DecisionLedger::nisht(const std::string&) {}

bool DecisionLedger::hasOpenInyen() const {
    for (const auto& [_, state] : inyenStates) {
        if (state != InyenState::Locked)
            return true;
    }
    return false;
}

bool DecisionLedger::isBlocked() const {
    return false;
}