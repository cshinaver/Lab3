/*
 * OvernightPackage.cpp
 * Implementation for overnight package
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage() : Package(), extraCostPerOunce(1)
{
    /*
     * Default constructor
    */
}
OvernightPackage::OvernightPackage(
        string _name,
        string _addr,
        string _zip,
        double _weight, 
        double _cpo,
        double _extraCostPerOunce
        ) : Package(
            _name,
            _addr,
            _zip,
            _weight,
            _cpo
        ),
        extraCostPerOunce(_extraCostPerOunce)
{
    /*
     * Non-default constructor
    */
}

double OvernightPackage::calculateCost()
{
    /*
     * Calculates cost with fixed addl cost added
    */
    return Package::calculateCost() + extraCostPerOunce;
}

ostream& operator<<(ostream& out, OvernightPackage p)
{
    /*
     * prints data about Overnight Package
    */
    Package pT = (Package)p;
    out << pT;
    out << "Extra Cost Per Ounce: " << p.extraCostPerOunce << endl;
    return out;
}
