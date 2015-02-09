#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

/*
 * TwoDayPackage.h
 * Two day package class for a two day package
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include "Package.h"

class TwoDayPackage : public Package
{
    friend ostream& operator<<(ostream& out, TwoDayPackage p);

    public:
        TwoDayPackage();
        TwoDayPackage(string _name, string _addr, string _zip, double _weight, double _cpo, double _fixedAddlCost);
        double calculateCost();
    private:
        const double fixedAdditionalCost;

};

#endif
