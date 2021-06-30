/*============================================================
|
| File Name: Bank_Accounts_v2_Acc_Hierarchy_Polymorph.cpp
| Purpose: To use bank accounts using the Account hierarchy 
|   and polymorphic functions.
| Documentation: A polymorphic banking program using the Account 
|   hierarchy.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-27         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
#include<vector>
#include<string>

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

    virtual void creditF(double amount)
    {
        balance = balance + amount;
    }

    virtual bool debetF(double amount)
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

    virtual double calculateInterest()
    {
        return 0;
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

    virtual double calculateInterest()
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

    virtual void creditF(double amount)
    {
        if (amount - transacFee >= 0.0)
            Account::creditF(amount - transacFee);
        else
            cout << "Error: the transaction fee would exceed the deposited amount." << endl;
    }

    virtual bool debetF(double amount)
    {
        if (Account::debetF(amount + transacFee))
            return 1;
        else
            return 0;
    }
};


int main()
{
    vector<Account*> accVect(2);
    accVect[0] = new SavingsAccount(100, 0.01);
    accVect[1] = new CheckingAccount(200, 0.02);

    double creditAmount, debetAmount;

    for (int i = 0; i < accVect.size(); i++)
    {
        cout << typeid(*accVect[i]).name() << endl;
        cout << "Your balance is: " << accVect[i]->getBalance() << endl;  // cout << (*accVect[i]).getBalance()

        cout << "Please specify the amount you want to deposit or leave it blank: ";
        cin >> creditAmount;
        accVect[i]->creditF(creditAmount);
        cout << "Your new balance is: " << accVect[i]->getBalance() << endl;  // cout << (*accVect[i]).getBalance()
        cout << endl;

        cout << "Please specify the amount you want to withdraw or leave it blank: ";
        cin >> debetAmount;
        accVect[i]->debetF(debetAmount);
        cout << "Your new balance is: " << accVect[i]->getBalance() << endl;  // cout << (*accVect[i]).getBalance()

        cout << endl;
    }

    for (int i = 0; i < accVect.size(); i++)
    {
        if (typeid(*accVect[i]).name() == typeid(SavingsAccount).name())
        {
            double percent = accVect[i]->calculateInterest();
            cout << "Your percent is: " << percent << endl;
            accVect[i]->creditF(percent);
            cout << "Your new balance is: " << accVect[i]->getBalance() << endl;  // cout << (*accVect[i]).getBalance()
        }
        else
            cout << "Your new balance is: " << accVect[i]->getBalance() << endl;  // cout << (*accVect[i]).getBalance()
    }

    return 0;
}

