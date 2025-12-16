// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Base Class (Grandfather)
class Grandfather
{
public:
   void display_gf()
   {
   cout << "I am the grandfather." << endl;
   }
};
// Intermediate Derived Class(Father) - inherits from Grandfather
class Father : public Grandfather
{
public:
   void display_f()
   {
    cout << "I an the father and inherit from Grandfather." << endl;   
   }
};
// Derived Class(Child) - inherits from Father(and implicitly Grandfather)
class Child : public Father
{
public:
   void display_c()
   {
   cout << "I am the child and inherit from Father." << endl;    
   }
};

int main() {
   
Child c;
c.display_gf();
c.display_f();
c.display_c();
    return 0;
}
