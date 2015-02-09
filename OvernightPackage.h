#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
/*
 * OvernightPackage.h
 * header file for overnight package
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include "Package.h"

class OvernightPackage : public Package
{

    friend ostream& operator<<(ostream& out, OvernightPackage p);

    public:
        OvernightPackage();
        OvernightPackage(string _name, string _addr, string _zip, double _weight, double _cpo, double _extraCostPerOunce);
        double calculateCost();

    private:
        const double extraCostPerOunce;
};
#endif
