/// Single inheritance: In single inheritance, one class is derived from another class.
#include <iostream>
using namespace std;

///Base class
class Vehicle
{
  public:
         Vehicle()
         {
          cout << "Starting price of car" << endl;
         }

};

///Derived class
class Toyata : public Vehicle
{
 public:


        Toyota()
        {
         cout << "Name : Land Cruiser" << endl;
         cout << "Price : $57,445" << endl;
        }
};


int main()
{
  Toyota Car;
  return 0;
}
