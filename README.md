# Lab 3

## Todos
### Part 2
- [x] [Charles] Create base class Package with ivars name, address and zip code. Also, weight of package and cost per ounce to ship package, both nonnegative (add check for this)
- [ ] Add checks to make sure weight and cost per ounce non-negative (non-member helper functions)
- [ ] [Charles] public base class method called CalculateCost() that returns a double indicating cost to ship package, (CPO * weight)
- [ ] [Charles] Derived class called TwoDayPackage with fixedAdditionalCost ivar. Write
    CalculateCost() method that invokes base class method and adds on fixed
    cost.
- [ ] Derived class called OvernightPackage with addl ivar extraCostPerOunce. CalculateCost() method that calls base class CalculateCost() and add on new extraCostPerOunce * weight.
    Return double. 
- [ ] [Charles] Provide driver program that will display contents of derived
    TwoDayPackage and Overnight Package class


### Part 3
- [ ] Rewrite BankAccount class to use composition (Rewrite BankAccount to use
    composition (i.e., include a BankAccount
    object in the CreditCard class, similar to lab #1 with cols in a board.
    After you
    complete this exercise, write a few additional paragraphs in your report on
    which approach (composition vs. inheritance) is more natural and why? For
    grading please include a simple driver program that creates and tests at
    least one
    object that contains a bankAccount for this question.

- [ ] Use the Package inheritance hierarchy created in Part 2 to create a
    program that
    displays address information and calculates shipping costs for several
    packages
    using base class pointers/polymorphism. The program can use either a static
    array or a vector of pointers (your call) but must loop through at least
    three
    TwoDayPackages and three OvernightPackages and compute the total cost of
    sending these packages by calling virtual functions. For example, this can
    be the
    cost of processing/shipping a day’s orders.

