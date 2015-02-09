/*
 * packageDriver.cpp
 * Package driver for package class
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    TwoDayPackage p("Charles", "Address", "46032", 50, 3.30, 5);
    OvernightPackage o("Jared", "Address", "11369", 25, 5.30, 4.20);
    cout << p << endl;
    cout << o << endl;
}

