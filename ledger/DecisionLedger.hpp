#pragma once
#include <string>

class DecisionLedger {
public:
    void openInyen(const std::string& name);

    void trakht(const std::string& name);
    void farshtey(const std::string& name);
    void shoyn(const std::string& name);
    void ibertrakht(const std::string& name);
    void oyshern(const std::string& name);
    void emunah(const std::string& name);

    void psak(const std::string& name);
    void nisht(const std::string& name);

    bool hasOpenInyen() const;
    bool isBlocked() const;
};