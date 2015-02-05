/*
 * Checking Account implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(int _accountNumber, double _balance) : BankAccount(_accountNumber, _balance)
{
    maxWithdrawlAmount = 0;
    minWithdrawlAmount = 0;
    debitCardNumber = 0;
};

void CheckingAccount::print()
{

    cout << "Your max withdrawl amount is " << maxWithdrawlAmount << endl;
}
