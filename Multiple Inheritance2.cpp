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
#include <iostream>
using namespace std;

//Base class
class Car
{
public:
   void drive()
   {
    cout << "Driving on land." << endl;
   }
};

//Base class
class Boat
{
public:
   void sail()
   {
    cout << "Sailing on water." << endl;
   }
};
//Derived class
class DualModeVehicle : public Car, public Boat
{
public:
    void use()
    {
    drive(); // Calls the drive function from Car
    sail(); // Calls the sail function from Boat
    }
};

int main()
{
  DualModeVehicle myvehicle;
  myvehicle.use(); // Calls the use function by  myvehicle
    
    return 0;
}
