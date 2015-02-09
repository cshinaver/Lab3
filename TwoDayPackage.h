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
    // std stream interface
    friend ostream& operator<<(ostream& out, TwoDayPackage& p)
    {
        p.print(out);
        return out;
    }

    public:
        TwoDayPackage();
        TwoDayPackage(string _name, string _addr, string _zip, double _weight, double _cpo, double _fixedAddlCost);
        virtual double calculateCost() const;

    private:
        const double fixedAdditionalCost;

        // Virtualized printing function
        virtual void print(ostream&) const;

};

#endif
