#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(int number,string name,double amount)
    {
        accountNumber=number;
        accountHolderName=name;
        balance=amount;
    }

    void deposit(double amount)
    {
        if(amount>0)
            balance=balance+amount;
        else
            cout<<"Invalid deposit amount"<<endl;
    }

    void withdraw(double amount)
    {
        if(amount<=0)
            cout<<"Invalid withdrawal amount"<<endl;
        else if(amount>balance)
            cout<<"Insufficient balance"<<endl;
        else
            balance=balance-amount;
    }

    void display()
    {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount account(101,"Rahul",50000);

    account.display();

    cout<<"\nAfter deposit:"<<endl;
    account.deposit(10000);
    account.display();

    cout<<"\nAfter withdrawal:"<<endl;
    account.withdraw(5000);
    account.display();

    return 0;
}