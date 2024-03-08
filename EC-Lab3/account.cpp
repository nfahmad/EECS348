#include "account.h"
#include <iostream>
#include <string>
#include <random>

Account::Account(std::string accountNumber, std::string accountHolder, double accountBalance){
    this->accountBalance = double(accountBalance);
    this->accountHolder = std::string(accountHolder);
    this->accountNumber = std::string(accountNumber);
}

Account::Account(const Account& origin) {
    this->accountNumber = std::string(origin.accountNumber);
    this->accountBalance = double(origin.accountBalance);
    this->accountHolder = std::string(origin.accountHolder);
}

void Account::deposit(const double& money) {
    (this->accountBalance) += money;
}

double Account::getBalance() const {
    return this->accountBalance;
}

void Account::withdraw(const double& money) {
    if (money > this->accountBalance) {
        std::cout << "Insufficient funds" << std::endl;
    }
    else {
        (this->accountBalance) -= money;
    }
}

void Account::displayDetails() const {
    std::cout << "Holder: " << this->accountHolder << std::endl;
    std::cout << "Account Number: " << this->accountNumber << std::endl;
    std::cout << "Balance: " << this->accountBalance << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
    account.displayDetails();
    return os;
}
