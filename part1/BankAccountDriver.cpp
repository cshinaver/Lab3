/*
 * BankAccountDriver.cpp
 * Bank account driver program
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include "BankAccount.h"
#include "CheckingAccount.h"
#include "BoatLoan.h"

int main()
{
    BankAccount ba;
    BoatLoan bl;
    bl.print();
    CheckingAccount ca;
    ca.print();
    return 0;
}

