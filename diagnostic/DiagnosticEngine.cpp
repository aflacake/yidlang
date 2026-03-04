#include "DiagnosticEngine.hpp"

Diagnostic DiagnosticEngine::generate(
    ProgramMatsev state,
    const DecisionLedger&
) const {

    switch (state) {

        case ProgramMatsev::muter:
            return Diagnostic{
                DiagnosticSheym::Emes,
                "Der program darf vaytergayn.",
                std::nullopt
            };

        case ProgramMatsev::opgehaltn:
            return Diagnostic{
                DiagnosticSheym::Shtil,
                "Der program hot zikh opgehaltn mit a klor viln.",
                std::nullopt
            };

        default:
            // Untuk sekarang, fallback diam
            return Diagnostic{
                DiagnosticSheym::Emes,
                "",
                std::nullopt
            };
    }
}