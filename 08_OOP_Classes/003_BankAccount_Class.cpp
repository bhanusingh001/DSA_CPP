/*
 * Problem: BankAccount Class
 * Description: Create class with balance. Methods: deposit(amt), withdraw(amt), getBalance(). Handle insufficient balance.
 * Topic: OOP-Class
 * Date: 2026-02-28 00:00
 */

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance = 0) {
        balance = initialBalance;
    }

    void deposit(double amt) {
        if(amt > 0) {
            balance += amt;
            cout << "Successfully deposited: $" << amt << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amt) {
        if(amt > balance) {
            cout << "Error: Insufficient Balance!" << endl;
        } else if (amt <= 0) {
            cout << "Error: Invalid withdrawal amount!" << endl;
        } else {
            balance -= amt;
            cout << "Successfully withdrawn: $" << amt << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    double initialAmt;
    cout << "Enter initial balance to open account: ";
    cin >> initialAmt;

    BankAccount acc(initialAmt);
    int choice;
    double amount;

    do {
        cout << "\n--- Bank Menu ---" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 3:
                cout << "Current Balance: $" << acc.getBalance() << endl;
                break;
            case 4:
                cout << "Thank you for using our bank!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}