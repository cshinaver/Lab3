/*
 * Boat Loan class
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#ifndef BOATLOAN_H
#define BOATLOAN_H

#include "BankAccount.h"

class BoatLoan : public BankAccount
{
    public:
        BoatLoan(int _accountNumber, double _balance);
        void print();
    private:
        double maxLootStorage;
        int numOfCannons;
        int remainingMonthsOfLoan;
};

#endif
