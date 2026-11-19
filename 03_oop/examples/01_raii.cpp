#include <fstream>
#include <iostream>
#include <string>

class LogFile {
public:
    explicit LogFile(const std::string& path) : file_(path) {
        if (!file_) {
            throw std::ios_base::failure("Could not open log file");
        }
    }

    void write(const std::string& message) {
        file_ << message << '\n';
    }

private:
    std::ofstream file_;
};

int main() {
    LogFile log{"learning.log"};
    log.write("Resource acquired and released automatically.");
    std::cout << "Wrote learning.log\n";
}

