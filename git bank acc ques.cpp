#include <iostream>
using namespace std;

class bankaccount {

    double balance;
    string name;
    int accno;

public:

    // Default constructor
    bankaccount() {
        name = "Not Known";
        accno = 0;
        balance = 0.0;
    }

    // Parameterized constructor
    bankaccount(string n, int x, double b) {
        name = n;
        accno = x;
        balance = b;
    }

    // Input function
    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accno;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    // Deposit
    void deposit(double x) {
        balance += x;
    }

    // Withdraw
    void withdraw(double x) {
        if (balance - x >= 500) {
            balance -= x;
            cout << "Amount Withdrawn Successfully.\n";
        }
        else {
            cout << "Unable to debit. Minimum balance should remain 500.\n";
        }
    }

    // Display
    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Name    : " << name << endl;
        cout << "Acc No  : " << accno << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main() {

    bankaccount acc1;

    double dep, wd;

    acc1.input();

    cout << "\nEnter amount to deposit: ";
    cin >> dep;
    acc1.deposit(dep);

    cout << "Enter amount to withdraw: ";
    cin >> wd;
    acc1.withdraw(wd);

    acc1.display();

    return 0;
}
