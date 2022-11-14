#include <iostream>
#include <string>
#include "/home/abhishek/Desktop/courses/c++/BankAccountProject/headers/BankAccount.h"

using namespace std;

int main()
{

    BankAccount myAccount("Abhi", 5000);
    BankAccount bobsAccount("Bob");

    bobsAccount.deposit(500);
    cout<<bobsAccount.getBalance();

    bobsAccount.withdraw(1000);

    cout<<bobsAccount.getBalance();
    cout<<myAccount.getOwner();

    
    return 0;
}