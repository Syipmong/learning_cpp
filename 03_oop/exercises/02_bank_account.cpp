#include <iostream>
#include <string>
#include <utility>

class BankAccount {
public:
    explicit BankAccount(std::string owner) : owner_(std::move(owner)) {}

    // TODO: Deposit and withdraw while preserving a non-negative balance.
    // TODO: Reject invalid amounts and expose read-only account information.

private:
    std::string owner_;
    long long balance_{};
};

int main() {
    BankAccount account{"Learner"};
    // TODO: Demonstrate successful and rejected transactions.
}
