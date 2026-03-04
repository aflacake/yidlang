#pragma once
#include <string>
#include <unordered_map>
#include <string>

enum class InyenState {
    Opened,        // trakht
    Understood,    // farshtey
    Acknowledged,  // shoyn
    Reviewed,      // oyshern
    Trusted,       // emunah
    Locked         // psak
};

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
	
private:
	std::unordered_map<std::string, InyenState> inyenStates;
};