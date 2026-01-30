#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        ownerName = name;
        balance = bal;
    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void displayBalance() {
        cout << "Account Holder: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(101, "HARSH", 5000);

    acc.credit(2000);
    acc.debit(1500);
    acc.displayBalance();

    return 0;
}