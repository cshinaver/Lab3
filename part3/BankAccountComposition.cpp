
/*
 * Bank Account implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "BankAccountComposition.h"

BankAccountComposition::BankAccountComposition()
{
    /*
     * Default constructor
    */

    balance = 0;
    accountNumber = 0;
    country = "Latvia";
}

BankAccountComposition::BankAccountComposition(int _accountNumber, double _balance, string _country)
{
    /*
     * Non-default constructor
    */

    balance = _balance;
    accountNumber = _accountNumber;
    country = _country;

}

BankAccountComposition::BankAccountComposition(int _accountNumber, double _balance, string _country, double _maxWithdrawlAmount, double _minWithdrawlAmount, int _debitCardNumber)
{
    /*
     * Non-default constructor
    */

    balance = _balance;
    accountNumber = _accountNumber;
    country = _country;
    ca.setMaxWithdrawlAmount(_maxWithdrawlAmount);
    ca.setMinWithdrawlAmount(_minWithdrawlAmount);
    ca.setDebitCardNumber(_debitCardNumber);


}

void BankAccountComposition::setBalance(double newBalance)
{
    /*
     * Sets balance
    */

    balance = newBalance;
}

double BankAccountComposition::getBalance()
{
    /*
     * Gets balance
    */

    return balance;
}

void BankAccountComposition::print()
{
    /*
     * Prints Bank info
    */

    cout << "Bank Account informaiton:" << endl;
    cout << "Your balance is " << balance << endl;
    cout << "Your account number is " << accountNumber << endl;
    cout << "Your country is " << country << endl;
}

void BankAccountComposition::printca()
{
    cout << "Checking Account informaiton:" << endl;
    ca.print();
}
