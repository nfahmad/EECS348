#include <iostream>
#include <string>
#include "savingsaccount.h"
#include "checkingaccount.h"

int main() {
    SavingsAccount savings("S123", "John Doe", 1000, 0.02);
    CheckingAccount current("C456", "Jane Doe", 2000, 500);

    std::cout << savings << current << std::endl << std::endl;

    savings.deposit(500);
    current.withdraw(1000);
    
    std::cout << "Account Details after deposit and withdrawl: " << std::endl;
    std::cout << savings << current << std::endl << std::endl;

    // Transfer 300 from savings to current
    current = current + savings;

    std::cout << "Account Details after transfer: " << std::endl;
    std::cout << savings << current << std::endl << std::endl;

    return 0;
}