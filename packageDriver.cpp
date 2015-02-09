/*
 * packageDriver.cpp
 * Package driver for package class
 * Maintainers: Charles Shinaver, Jared Rodgers
*/

#include <iostream>
#include "TwoDayPackage.h"

int main()
{
    TwoDayPackage p("Charles", "Address", "46032", 50, 3.30, 5);
    cout << p;
}

