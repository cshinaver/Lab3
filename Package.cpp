/*
 * Package.cpp
 * Package class implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "Package.h"

double Package::CalculateCost() const
{
    /*
     * Calculates cost of package and returns as double
    */

    return costPerOunce * weight;
}

Package::Package() : name("Batman"), address("1007 Mountain Drive, Gotham"), zipCode("08641"), weight(1), costPerOunce(1)
{
    /*
     * Default constructor
    */
}

Package::Package(string _name, string _addr, string _zip, double _weight, double _cpo) :  name(_name), address(_addr), zipCode(_zip), weight(isNegative(_weight)), costPerOunce(isNegative(_cpo))
{
    /*
     * Non-default constructor
    */
}

ostream& operator<<(ostream& out, Package& p)
{
    /*
     * Shows data about class
    */
    out << "To: " << p.name << endl;
    out << "Address: " << p.address << endl;
    out << "Zip Code: " << p.zipCode << endl;
    out << "Weight: " << p.weight << endl;
    out << "Cost Per Ounce: " << p.costPerOunce << endl;
    return out;
}

double Package::isNegative(double num) const
{
    /*
     * Checks if the input is less than zero
    */
    if (num<0)
    {
        cout << "Error, the number you input was less than zero. Set to 1." << endl;
        return 1;
    }
    else
    {
        return num;
    }
}
