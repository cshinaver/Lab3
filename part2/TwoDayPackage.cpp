/*
 * TwoDayPackage.cpp
 * Implementation for two day package
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage() : Package(), fixedAdditionalCost(1)
{
    /*
     * Default constructor
    */
}
TwoDayPackage::TwoDayPackage(
        string _name,
        string _addr,
        string _zip,
        double _weight, 
        double _cpo,
        double _fixedAddlCost
        ) : Package(
            _name,
            _addr,
            _zip,
            _weight,
            _cpo
        ),
        fixedAdditionalCost(_fixedAddlCost)
{
    /*
     * Non-default constructor
    */
}

double TwoDayPackage::calculateCost() const
{
    /*
     * Calculates cost with fixed addl cost added
    */
    return Package::calculateCost() + fixedAdditionalCost;
}

void TwoDayPackage::print(ostream& out) const
{
    /*
     * Shows data about class
    */
    Package pT = (Package)(*this);
    out << pT;
    out << "Fixed Additional Cost: " << fixedAdditionalCost << endl;
}
