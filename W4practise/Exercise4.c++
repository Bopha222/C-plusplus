#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:


public:
    // TODO: Default constructor
    BankAccount();

    // TODO: Parameterized constructor
    BankAccount(string name, int accNum, double bal);

    // TODO: deposit function
    void deposit(double amount);

    // TODO: withdraw function
    void withdraw(double amount);

    // TODO: displayAccount function
    void displayAccount() const;
};

int main() {
    // Create account with default constructor
    BankAccount acc1;

    // Create account with parameterized constructor
    BankAccount acc2("Sonika", 2025001, 150.0);

    // Deposit and withdraw
    acc1.deposit(100);
    acc1.withdraw(30);
    acc2.deposit(50);
    acc2.withdraw(200); // should fail if balance is insufficient

    // Display both accounts
    acc1.displayAccount();
    acc2.displayAccount();

    return 0;
}
