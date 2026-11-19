#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{5, 1, 4, 2, 3};
    std::ranges::sort(values);

    const auto even_count = std::ranges::count_if(
        values, [](int value) { return value % 2 == 0; });

    for (const int value : values) {
        std::cout << value << ' ';
    }
    std::cout << "\nEven values: " << even_count << '\n';
}

