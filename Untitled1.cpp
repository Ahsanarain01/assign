#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    // Constructor to initialize balance
    ATM() {
        balance = 0.0;
    }

    // Function to check balance
    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }

    // Function to deposit money
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: $";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: $";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
};

int main() {
    ATM atm;
    int choice;
    
    while (true) {
        // Display menu
        cout << "\nATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                atm.deposit();
                break;
            case 3:
                atm.withdraw();
                break;
            case 4:
                cout << "Thank you for using the ATM!" << endl;
                return 0;  // Exit the program
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

