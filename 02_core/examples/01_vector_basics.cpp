#include <iostream>
#include <vector>

int main() {
    const std::vector<int> scores{82, 91, 77, 95};
    int total{};

    for (const int score : scores) {
        total += score;
    }

    const double average =
        static_cast<double>(total) / static_cast<double>(scores.size());
    std::cout << "Average: " << average << '\n';
}

