/*
 * Boat Loan class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#ifndef BOATLOAN_H
#define BOATLOAN_H

class BoatLoan : public BankAccount
{
    public:
        void print();
    private:
        double maxLootStorage;
        int numOfCannons;
        int remainingMonthsOfLoan;
};

#endif
