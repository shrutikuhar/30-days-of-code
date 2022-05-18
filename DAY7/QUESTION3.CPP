// C++ program for Hybrid Inheritance
 
#include <iostream>
using namespace std;
 
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};
 
// base class
class Fare {
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};
 
// first sub class
class Car : public Vehicle {
};
 
// second sub class
class Bus : public Vehicle, public Fare {
};

int main()
{
    Bus obj2;
    return 0;
}
