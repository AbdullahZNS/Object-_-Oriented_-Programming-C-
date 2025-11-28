// C++ public Inheritance
#include <iostream>
using namespace std;

class Base
{
private:
   int pvt = 10;

protected:
   int prot = 20;
   
public:
    int pub = 30;
    // function to access private member
    int getPVT()
    {
    return pvt;   
    }
};

class Derived : protected Base
{
public:
// Function to access protected member from Base
   int getProt()
   {
   return prot;
   }
   
  
 
 // Function to access public member from Base
 int getPub()
 {
 return pub;    
 }
 // Function to access private member from Base  
  void P()
   {
   cout << "Private: " <<  getPVT() << endl;    
   }
};

int main() {
    
  Derived d_ob;
  d_ob.P();
 cout << "Protected: " << d_ob.getProt() << endl;
 cout << "Public:    " << d_ob.getPub() << endl;


    return 0;
}
