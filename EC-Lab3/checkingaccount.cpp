#include "checkingaccount.h"
#include <iostream>
#include <string>
#include <iomanip>

CheckingAccount::CheckingAccount(std::string accountNumber, std::string accountHolder, double accountBalance, double maximumOverdraft) : Account(accountNumber, accountHolder, accountBalance) {
    this->maximumOverdraft = double(-maximumOverdraft);
}

void CheckingAccount::withdraw(const double& amount) {
    if (this->getBalance() - amount < this->maximumOverdraft) {
        std::cout << "Cannot withdraw $" << amount << std::endl;
        std::cout << "Maximum Overdraft of $" << maximumOverdraft<< std::endl;
    } else {
        Account::withdraw(amount);
    }
}

void CheckingAccount::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Account Details for Current Account (ID: " << this->accountNumber << ")" << std::endl;
    std::cout << "Holder: " << this->accountHolder << std::endl;
    std::cout << "Balance: $" << this->getBalance() << std::endl;
    std::cout << "Overdraft Limit: $" << -this->maximumOverdraft << std::endl;
}

CheckingAccount operator+(CheckingAccount& lhs, Account& rhs) {
    rhs.withdraw(300);
    lhs.deposit(300);
    return lhs;
}