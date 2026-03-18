#include <iostream>
using namespace std;
class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    float balance;
    
public:
    void assignValues()
    {
        cout << "Enter Depositor Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Type: ";
        cin >> accountType;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void depositAmount()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;
        cout << "Amount deposited successfully." << endl;
    }

   void withdrawAmount()
    {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
    void display()
    {
        cout << "Depositor Name: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.assignValues();
    acc.depositAmount();
    acc.withdrawAmount();
    acc.display();

    return 0;
}
