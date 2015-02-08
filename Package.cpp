/*
 * Package.cpp
 * Package class implementation
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include "Package.h"

Package::Package() : name("Batman"), address("1007 Mountain Drive, Gotham"), zipCode("08641"), weight(1), costPerOunce(1)
{
    /*
     * Default constructor
    */
}

ostream& operator<<(ostream& out, Package& p)
{
    /*
     * Shows data about class
    */
    return out;
}


