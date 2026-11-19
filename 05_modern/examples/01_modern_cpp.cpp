#include <iostream>
#include <optional>
#include <string>

std::optional<int> parse_positive(const std::string& text) {
    try {
        const int value = std::stoi(text);
        if (value > 0) {
            return value;
        }
    } catch (const std::exception&) {
        return std::nullopt;
    }
    return std::nullopt;
}

int main() {
    for (const std::string input : {"42", "-3", "oops"}) {
        if (const auto value = parse_positive(input)) {
            std::cout << input << " -> " << *value << '\n';
        } else {
            std::cout << input << " -> invalid\n";
        }
    }
}

