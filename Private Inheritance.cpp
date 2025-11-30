// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 30;
    
protected:
    int prot = 20;
    
public:
    int pub = 10;
    
    int getPVT()
    {
    return pvt;
    }
};

class Derived : private Base
{
public:
   int getprot()
   {
   return prot;
   }
   
   int getpub()
   {
    return pub;    
   }
   
   int x()
   {
   return getPVT();
   }
};

int main() {
   
   Derived d_ob;
   cout << "Public: " << d_ob.getpub() << endl;
   cout << "Protected: " << d_ob.getprot() << endl;
   cout << "Private: " << d_ob.x() << endl;
   
   

    return 0;
}
