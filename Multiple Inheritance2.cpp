//problem:01 Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A
{
 public:
    A()
    {
    cout << "Class A's Constructor." << endl;
    }
    
};

class B
{
 public:
    B()
    {
    cout << "Class B's Constructor." << endl;
    }
};

class C : public A, public B
{
public: 
   C()
   {
   cout << "Class C's Constructor. " << endl;
   }
};

int main() {
    
 C c_ob;   
    
    
    return 0;
}
// problem: 02
//  Multiple inheritance: Multiple inheritance in C++ is a mechanism where a class inherits from more than one base class simultaneously 

 
#include <iostream>
using namespace std;

// Base class(Car)
class Car
{
public:
   void drive()
   {
   cout << "Driving on land." << endl;
   }
};

// Base class(Boat) 
class Boat
{
public:
   void sail()
   {
   cout << "Sailing on water." << endl;    
   }
};

class DualModeVehicle : public Car, public Boat
{
public:
   void use()
   {
   drive();
   sail();
   }
   
};

int main()
{
DualModeVehicle DMV;
DMV.use();
    
    return 0;
}
