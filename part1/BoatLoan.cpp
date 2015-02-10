/*
 * Boat Loan implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "BoatLoan.h"
#include <iostream>

using namespace std;


BoatLoan::BoatLoan() : BankAccount()
{
    /*
     * Default constructor
    */
    maxLootStorage = 100;
    numOfCannons = 5;
    remainingMonthsOfLoan = 10;
}

BoatLoan::BoatLoan(int _accountNumber, double _balance) : BankAccount(_accountNumber, _balance, "USA")
{
    maxLootStorage = 100;
    numOfCannons = 5;
    remainingMonthsOfLoan = 10;
}


void BoatLoan::print()
{
    /*
     * Prints max loot storage, number of cannons, and remaining months until
     * boat is owned 
    */

    cout << "You only have " << remainingMonthsOfLoan << " months until you own the boat! Arggg" << endl;
    cout << "Your boat will be able to store " << maxLootStorage << endl;
    cout << "It will also have " << numOfCannons << " cannons!" << endl;
}
