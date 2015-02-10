/*
 * Checking Account implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount() : BankAccount()
{
    maxWithdrawlAmount = 1000;
    minWithdrawlAmount = 20;
    debitCardNumber = 0;
};

CheckingAccount::CheckingAccount(int _accountNumber, double _balance) : BankAccount(_accountNumber, _balance, "USA")
{
    maxWithdrawlAmount = 1000;
    minWithdrawlAmount = 20;
    debitCardNumber = 0;
};

void CheckingAccount::print()
{
    cout << "Your max withdrawl amount is " << maxWithdrawlAmount << endl;
    cout << "Your min withdrawl amount is " << minWithdrawlAmount << endl;
    cout << "Your debitCardNumber is " << debitCardNumber << endl;
}
