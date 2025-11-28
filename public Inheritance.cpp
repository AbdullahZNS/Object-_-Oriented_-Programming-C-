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

class Derived : public Base
{
public:
// Function to access protected member from Base
   int getProt()
   {
   return prot;
   }
    
};

int main() {
    
  Derived d_ob;
 cout << "Private:   " << d_ob.getPVT() << endl;
 cout << "Protected: " << d_ob.getProt() << endl;
 cout << "Public:    " << d_ob.pub << endl;

    return 0;
}
