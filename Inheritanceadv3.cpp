/*C++ private Inheritance*/
/*private inheritance makes the public and protected members of the base class private in the derived class.*/

#include <iostream>
using namespace std;


class Base
{

private:
           int pvt = 1;

protected:

           int prot = 2;

public:

           int pub = 3;
            // function to access private member
           int getPVT()
           {
           return pvt;
           }
};

class Derived : private Base
{

public:
       // function to access private member
       int getpub()
      {
       return pub;
      }
     // function to access protected member from Base
     int getprot()
     {
      return prot;
     }

};



int main()
{

    Derived obj;
    cout << "Public    = " << obj.getpub() << endl;
    cout << "Protected = " << obj.getprot() << endl;

    return 0;
}
