#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    string holderName;
    double balance;

public:
    Account(int accNum, string name, double bal) : accountNumber(accNum), holderName(name), balance(bal) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) = 0;
    
    void displayBalance() const {
        cout << "Account Number: " << accountNumber << " | Holder: " << holderName << " | Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, string name, double bal, double rate) : Account(accNum, name, bal), interestRate(rate) {}

    void applyInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        cout << "Interest Applied: " << interest << " | New Balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        if (amount > balance) {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
        }
    }
};

class CurrentAccount : public Account {
private:
    double minimumBalance;

public:
    CurrentAccount(int accNum, string name, double bal, double minBal) : Account(accNum, name, bal), minimumBalance(minBal) {}

    void withdraw(double amount) override {
        if (balance - amount < minimumBalance) {
            cout << "Withdrawal denied! Balance cannot fall below minimum balance of " << minimumBalance << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
        }
    }
};

int main() {
    SavingsAccount savings(101, "Alice", 5000, 5.0); 
    CurrentAccount current(102, "Bob", 7000, 1000);  
    int choice;
    do {
        cout << "\n--- Bank Account Management System ---" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Apply Interest (Savings Account)" << endl;
        cout << "4. Display Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                savings.deposit(amount);
                current.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                savings.withdraw(amount);
                current.withdraw(amount);
                break;
            case 3:
                savings.applyInterest();
                break;
            case 4:
                savings.displayBalance();
                current.displayBalance();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
