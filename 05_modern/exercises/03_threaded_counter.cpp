#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

int main() {
    int counter{};
    std::mutex mutex;
    // TODO: Launch several threads that increment counter safely.
    // TODO: Join every thread before printing the final value.
    std::vector<std::thread> workers;
    std::cout << counter << '\n';
}
