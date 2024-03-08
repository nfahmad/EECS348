#include "savingsaccount.h"
#include <iostream>
#include <string>
#include <iomanip>

SavingsAccount::SavingsAccount(std::string accountNumber, std::string accountHolder, double accountBalance, double interestRate) : Account(accountNumber, accountHolder, accountBalance) {
    this->interestRate = double(interestRate);
}

void SavingsAccount::withdraw(const double& amount) {
    if (this->getBalance() - amount < MIN_BALANCE) {
        std::cout << "Cannot withdraw $" << amount << std::endl;
        std::cout << "Minimum balance of $" << MIN_BALANCE << " is required" << std::endl;
    } else {
        Account::withdraw(amount);
    }
}

void SavingsAccount::displayDetails() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Account Details for Savings Account (ID: " << this->accountNumber << ")" << std::endl;
    std::cout << "Holder: " << this->accountHolder << std::endl;
    std::cout << "Balance: $" << this->getBalance() << std::endl;
    std::cout << "Interest Rate: " << this->interestRate*100 << "%" << std::endl;
    std::cout << " " << std::endl;
}

SavingsAccount operator+(SavingsAccount& lhs, Account& rhs) {
    rhs.withdraw(300);
    lhs.deposit(300);
    return lhs;
}