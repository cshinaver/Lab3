/*
 * BankAccountDriver.cpp
 * Bank account driver program
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include "BankAccountComposition.h"
#include "CheckingAccount.h"

int main()
{
    BankAccountComposition ba;
    BankAccountComposition ba2(1000, 123, "USA", 20, 2000, 12);
    ba.print();
    ba.printca();
    cout << endl;
    ba2.print();
    ba2.printca();
    return 0;
}


