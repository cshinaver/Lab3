/*
 * Boat Loan class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

class BoatLoan : public BankAccount
{
    public:
        void print();
    private:
        double maxLootStorage;
        int numOfCannons;
        int remainingMonthsOfLoan;
};

