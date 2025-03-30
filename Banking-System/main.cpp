// Devon Smith
// Banking System
// This project will simulate a basic banking system where users can Deposit money, Withdrawl money, Check thier balance, and Exit the program!!!

#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    // Menu Loop
    while (true) {
        //  menu options
        cout << "======== BANKING SYSTEM ========\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "================================\n";
        cout << "Choose an option: ";
        cin >> choice;

        // Handle menu selection using switch
        switch (choice) {
            case 1:  // Deposit Money
                cout << "Enter amount to deposit: ";
                cin >> amount;

                //  deposit amount
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful! New balance: $" << balance << endl;
                } else {
                    cout << "Invalid amount. Deposit must be positive.\n";
                }
                break;

            case 2:  // Withdraw Money
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                //  withdrawal amount
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful! New balance: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient funds! Withdrawal failed.\n";
                } else {
                    cout << "Invalid amount. Withdrawal must be positive.\n";
                }
                break;

            case 3:  // Check Balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 4:  // Exit
                cout << "Exiting the banking system. Thank you for using our service!\n";
                return 0;  // Exit the program

            default:  // Invalid option
                cout << "Invalid option! Please choose a valid menu option.\n";
                break;
        }
    }

    return 0;
}

