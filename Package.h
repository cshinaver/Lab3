#ifndef PACKAGE_H
#define PACKAGE_H

/*
 * Package.h
 * Package class containing information about a package, such as name, address,
 * zip code, weight, and cost per ounce
 * Maintainers: Jared Rodgers, Charles Shinaver
*/

#include <iostream>

using namespace std;

class Package
{
    // std stream interface
    friend ostream& operator<<(ostream& out, Package& p)
    {
        p.print(out);
        return out;
    }

    private:
        const string name;
        const string address;
        const string zipCode;
        const double weight;
        const double costPerOunce;
        
        // Printing function virtualized
        virtual void print(ostream&) const;
    public:
        Package();
        Package(string _name, string _addr, string _zip, double _weight, double _cpo);
        virtual double calculateCost() const;
};

#endif
