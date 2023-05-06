// Creating and manipulating an Account object

#include<iostream>
#include<string>
#include "Account.h"
using namespace std;

int main(){
    int depositAmount;

    // create two account objects
    Account account1{"Jane Green",50};
    Account account2{"Jane Blue",-7};

    // display initial value of name for each Account
    cout<<"account1 name is: "<<account1.getName()<<" balance is Rs. "<<account1.getBalance()<<endl;
    cout<<"account2 name is: "<<account2.getName()<<" balance is Rs. "<<account2.getBalance()<<endl;

    cout<<"\n\nEnter deposit amount for account1: ";
    cin>>depositAmount;
    cout<<"Adding "<<depositAmount<<" to account1 balance";
    account1.deposit(depositAmount);

    cout<<"\n\nAccount1: "<<account1.getName()<<" balance is Rs. "<<account1.getBalance();
    cout<<"\n\nAccount2: "<<account2.getName()<<" balance is Rs. "<<account2.getBalance();

    cout<<"\n\nEnter deposit amount for account2: ";
    cin>>depositAmount;
    cout<<"Adding "<<depositAmount<<" to account2 balance";
    account2.deposit(depositAmount);

    cout<<"\n\nAccount1: "<<account1.getName()<<" balance is Rs. "<<account1.getBalance();
    cout<<"\n\nAccount2: "<<account2.getName()<<" balance is Rs. "<<account2.getBalance();

    // Account myAccount;

    // cout<<"Initial Account name is: "<<myAccount.getName();

    // cout<<"\nPlease enter the account name: ";
    // string theName;
    // getline(cin,theName);
    // myAccount.setName(theName);

    // cout<<"Name in object myAccount is: "<<myAccount.getName()<<endl;
}
