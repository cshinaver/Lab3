/*
 * Checking Account implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount()
{
    maxWithdrawlAmount = 0;
    minWithdrawlAmount = 0;
    debitCardNumber = 0;
};

CheckingAccount::CheckingAccount(int _accountNumber, double _balance)
{
    maxWithdrawlAmount = 0;
    minWithdrawlAmount = 0;
    debitCardNumber = 0;
};

void CheckingAccount::print()
{
    cout << "Your max withdrawl amount is " << maxWithdrawlAmount << endl;
    cout << "Your min withdrawl amount is " << minWithdrawlAmount << endl;
    cout << "Your debit card number is " << debitCardNumber << endl;
}

void CheckingAccount::setMaxWithdrawlAmount(double max)
{
    maxWithdrawlAmount=max;
}

double CheckingAccount::getMaxWithdrawlAmount()
{
    
    return maxWithdrawlAmount;
} 

void CheckingAccount::setMinWithdrawlAmount(double min)
{
    minWithdrawlAmount=min;
}

double CheckingAccount::getMinWithdrawlAmount()
{
    return minWithdrawlAmount;
}

void CheckingAccount::setDebitCardNumber(int card)
{
    debitCardNumber=card;
}

int CheckingAccount::getDebitCardNumber()
{
    return debitCardNumber;
}

