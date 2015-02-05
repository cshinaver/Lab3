/*
 * Bank Account class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

class BankAccount
{
    public:
        BankAccount();
        BankAccount(int _accountNumber, double _balance);
        void setBalance(double newBalance);
        double getBalance();
    private:
        double balance;
        int accountNumber;
};
