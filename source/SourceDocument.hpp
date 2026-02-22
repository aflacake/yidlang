#pragma once
#include <string>

class SourceDocument {
public:
    explicit SourceDocument(const std::string& path);

    const std::string& text() const;
};