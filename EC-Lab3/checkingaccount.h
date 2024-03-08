#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "account.h"

class CheckingAccount : public Account {
private: 
    double maximumOverdraft;
    
public:
    CheckingAccount(std::string accountNumber, std::string accountHolder, double accountBalance, double interestRate);
    void withdraw(const double& amount) override;
    void displayDetails() const override;
    friend CheckingAccount operator+(CheckingAccount& lhs, Account& rhs);
};

#endif 