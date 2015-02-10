
/*
 * Bank Account implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "BankAccount.h"

BankAccount::BankAccount()
{
    /*
     * Default constructor
    */

    balance = 0;
    accountNumber = 0;
    country = "Latvia";
}

BankAccount::BankAccount(int _accountNumber, double _balance, string _country)
{
    /*
     * Non-default constructor
    */

    balance = _balance;
    accountNumber = _accountNumber;
    country = _country;

}

void BankAccount::setBalance(double newBalance)
{
    /*
     * Sets balance
    */

    balance = newBalance;
}

double BankAccount::getBalance()
{
    /*
     * Gets balance
    */

    return balance;
}
