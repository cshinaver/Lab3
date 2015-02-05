/*
 * Boat Loan implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "BoatLoan.h"
#include <iostream>

using namespace std;

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
