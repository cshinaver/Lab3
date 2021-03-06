/*
 * Package.cpp
 * Package class implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "Package.h"
#include <stdexcept>

double Package::calculateCost() const
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

Package::Package(string _name, string _addr, string _zip, double _weight, double _cpo) :  name(_name), address(_addr), zipCode(_zip), weight(_weight), costPerOunce(_cpo)
{
    /*
     * Non-default constructor
    */

    // Check for non-negative values for weight and costPerOunce
    if (weight < 0)
    {
        throw invalid_argument("Improper weight inputted. Weight must be nonnegative");
    }
    if (costPerOunce < 0)
    {
        throw invalid_argument("Improper Cost Per Ounce inputted. Cost Per Ounce must be nonnegative");
    }

}

void Package::print(ostream& out) const
{
    /*
     * Shows data about class
    */
    out << "To: " << name << endl;
    out << "Address: " << address << endl;
    out << "Zip Code: " << zipCode << endl;
    out << "Weight: " << weight << endl;
    out << "Cost Per Ounce: " << costPerOunce << endl;
}
