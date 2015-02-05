/*
 * Checking Account class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

class CheckingAccount : public BankAccount
{
    public:
        void print();
    private:
        double maxWithdrawlAmount;
};

