/*
 * Bank Account class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#ifndef BANKACCOUNTCOMPOSITION_H 
#define BANKACCOUNTCOMPOSITION_H 

#include <iostream>
#include "CheckingAccount.h"

using namespace std;

class BankAccountComposition
{
    public:
        BankAccountComposition();
        BankAccountComposition(int _accountNumber, double _balance, string _country);
        void setBalance(double newBalance);
        double getBalance();
    private:
        double balance;
        int accountNumber;
        string country;
};

#endif
