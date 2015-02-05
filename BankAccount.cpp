
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
}

BankAccount::BankAccount(int _accountNumber, double _balance)
{
    /*
     * Non-default constructor
    */

    balance = _balance;
    accountNumber = _accountNumber;
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
