#include "SourceDocument.hpp"

SourceDocument::SourceDocument(const std::string& path) {
    // stub: belum membaca file
}

const std::string& SourceDocument::text() const {
    static std::string empty;
    return empty;
}