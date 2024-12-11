/*Hierarchical Inheritance:In Hierarchical inheritance, more than one sub-class inherits the property of a single base class*/





/*
class A
{
// body of the class A.

}
class B : public A
{
 // body of class B.
}
class C : public A
{
// body of class C.
}
class D : public A
{
 // body of class D. }
*/

#include <iostream>
using namespace std;

/// Base class
class Vehicle
{
  public:
         Vehicle()
         {
             cout << "Starting Price of Car: " << endl;
         }
};



///First sub class
class Toyota : public Vehicle
{
  public:
         Toyota()
         {
          cout <<"Name  : Land Cruiser"<< endl;
          cout <<"Price :$57,445" << endl << endl;
         }
};


class Nissan : public Vehicle
{
  public:
         Nissan()
         {
             cout <<"Name  : Nissan Patrol" << endl;
             cout <<"Price : $61,950." << endl << endl;
         }


};
int main()
{


  Toyota C1;
  Nissan C2;

 return 0;
}
