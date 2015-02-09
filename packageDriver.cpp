/*
 * packageDriver.cpp
 * Package driver for package class
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include <iostream>
#include "Package.h"

int main()
{
    Package p("Charles", "Address", "46032", 50, 3.30);
    cout << p.calculateCost() << endl;
}

