/*
 * Checking Account class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "BankAccount.h"


class CheckingAccount : public BankAccount
{
    public:
        CheckingAccount();
        CheckingAccount(int _accountNumber, double _balance);
        void print();
    private:
        double maxWithdrawlAmount;
        double minWithdrawlAmount;
        int debitCardNumber;
};

#endif
