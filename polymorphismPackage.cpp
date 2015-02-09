/*
 * polymorphismPackage.cpp
 * Demos polymorphism with Package and derived classes
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include <iostream>
#include <vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include "Package.h"

using namespace std;

void displayPackages();

int main()
{
    displayPackages();
    return 0;
}

void displayPackages()
{
    vector<Package *> packages;
    double totalCost = 0; 
    
    // Add three Two Day Packages
    packages.push_back(new TwoDayPackage());
    packages.push_back(
        new TwoDayPackage(
        "Xwing",
        "Aliciousness",
        "55555",
        42,
        2,
        40
        )
    );
    packages.push_back(
        new TwoDayPackage(
        "The",
        "Dude",
        "58128",
        10,
        2,
        80
        )
    );

    // Overnight packages
    packages.push_back(
        new OvernightPackage(
        "James",
        "Moriarty",
        "29123",
        1,
        2,
        8
        )
    );
    packages.push_back(
        new OvernightPackage(
        "James",
        "Dean",
        "09342",
        7,
        22,
        9
        )
    );
    packages.push_back(
        new OvernightPackage(
        "Tony",
        "Tiger",
        "98124",
        1,
        20,
        9
        )
    );

    
    // Print packages and costs
    cout << "Packages" << endl;
    for (int i = 0; i < packages.size(); i++)
    {
        cout << *(packages[i]);
        cout << "Cost to ship: " << packages[i]->calculateCost() << endl << endl;;
        totalCost += packages[i]->calculateCost();
    }

    cout << "Total cost for shipping packages today was: $" << totalCost << endl;

    // Deallocate
    for (int i = 0; i < packages.size(); i++)
    {
        delete packages[i];
    }
}

