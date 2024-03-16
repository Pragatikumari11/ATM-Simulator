#include <iostream>

using namespace std;

class ATM {
private:
    float balance;

public:
    ATM() {
        balance = 0.0;
    }

    void checkBalance() {
        cout << "Your balance is: $" << balance << endl;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully." << endl;
            checkBalance();
        } else {
            cout << "Invalid amount. Please enter a positive number." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully." << endl;
            checkBalance();
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }
};

int main() {
    ATM atm;
    int choice;
    float amount;

    cout << "Welcome to the ATM Simulator!" << endl;

    do {
        cout << "\nSelect an option:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM Simulator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
