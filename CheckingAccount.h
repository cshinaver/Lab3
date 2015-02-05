/*
 * Checking Account class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
class CheckingAccount : public BankAccount
{
    public:
        void print();
    private:
        double maxWithdrawlAmount;
};

#endif
