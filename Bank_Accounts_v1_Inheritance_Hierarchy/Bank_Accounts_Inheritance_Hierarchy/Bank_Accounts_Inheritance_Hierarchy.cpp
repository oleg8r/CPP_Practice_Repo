/*============================================================
|
| File Name: Bank_Accounts_v1_Inheritance_Hierarchy.cpp
| Purpose: To use bank accounts using the Account hierarchy.
| Documentation: A banking program using the Account hierarchy.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-26         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
using namespace std;

class Account
{
protected:   //Access from Base class and Child classes. No access from main() function
    double balance;

public:
    Account()   //Constructor without parameters (to use it in Child classes)
    {

    };

    Account(double bal)   //Constructor with parameters
    {
        if (bal >= 0.0)
            balance = bal;
        else
        {
            balance = 0.0;
            cout << "Error: the initial balance is invalid." << endl;
        }
    };

    double getBalance()
    {
        return balance;
    }

    void creditF(double amount)
    {
        balance = balance + amount;
    }

    bool debetF(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            return 1;
        }

        else
        {
            cout << "Error: the debit amount exceeded the account balance." << endl;
            return 0;
        }
    }
};

class SavingsAccount : public Account   //":" inheritance, "::" scope (oblast vidimosti)
{
public:
    double percentage;  //Shares of 1, not 100 (i.e. not % presentation)

    SavingsAccount(double bal, double per)
    {
        balance = bal;
        percentage = per;
    }

    double calculateInterest()
    {
        return balance * percentage;
    }
};

class CheckingAccount : public Account
{
public:
    double transacFee;

    CheckingAccount(double bal, double fee)
    {
        balance = bal;
        transacFee = fee;
    }

    void creditF(double amount)
    {
        if (amount - transacFee >= 0.0)
            Account::creditF(amount - transacFee);
        else
            cout << "Error: the transaction fee would exceed the deposited amount." << endl;
    }

    bool debetF(double amount)
    {
        if (Account::debetF(amount + transacFee))
            return 1;
        else
            return 0;
    }
};


int main()
{
    Account accObj(100.00);
    cout << accObj.getBalance() << endl;
    accObj.creditF(200.00);
    cout << accObj.getBalance() << endl;
    accObj.debetF(300.00);
    cout << accObj.getBalance() << endl;
    cout << endl;

    SavingsAccount savAccObj(100.00, 0.01);
    cout << savAccObj.getBalance() << endl;
    savAccObj.creditF(200.00);
    cout << savAccObj.getBalance() << endl;
    cout << savAccObj.calculateInterest() << endl;;
    savAccObj.debetF(300.00);
    cout << savAccObj.getBalance() << endl;
    cout << endl;

    CheckingAccount checkAccObj(100.00, 0.02);
    cout << checkAccObj.getBalance() << endl;
    checkAccObj.creditF(300.00);
    cout << checkAccObj.getBalance() << endl;
    checkAccObj.debetF(200.00);
    cout << checkAccObj.getBalance() << endl;
    cout << endl;

    return 0;
}
