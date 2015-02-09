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

    // interface function for printing
    friend ostream& operator<<(ostream& out, OvernightPackage& p)
    {
        p.print(out);
        return out;
    }
        
    public:
        OvernightPackage();
        OvernightPackage(string _name, string _addr, string _zip, double _weight, double _cpo, double _extraCostPerOunce);
        double calculateCost();

    private:
        const double extraCostPerOunce;
        virtual void print(ostream&) const;
};
#endif
