/*
 * Checking Account class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount 
{
    public:
        CheckingAccount();
        CheckingAccount(int _accountNumber, double _balance);
        void print();
        void setMaxWithdrawlAmount(double);
        double getMaxWithdrawlAmount();
        void setMinWithdrawlAmount(double);
        double getMinWithdrawlAmount();
        void setDebitCardNumber(int);
        int getDebitCardNumber();
    private:
        double maxWithdrawlAmount;
        double minWithdrawlAmount;
        int debitCardNumber;
};

#endif
