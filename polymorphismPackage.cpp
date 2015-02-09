/*
 * polymorphismPackage.cpp
 * Demos polymorphism with Package and derived classes
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include <iostream>
#include <vector>
#include "TwoDayPackage.h"
#include "Package.h"

using namespace std;

int main()
{
    vector<Package> packages;
    
    // Add three Two Day Packages
    packages.push_back(TwoDayPackage());
    packages.push_back(
        TwoDayPackage(
        "Xwing",
        "Aliciousness",
        "55555",
        42,
        2,
        40
        )
    );

    
    for (int i = 0; i < packages.size(); i++)
    {
        cout << packages[i] << endl;
    }

    return 0;
}

