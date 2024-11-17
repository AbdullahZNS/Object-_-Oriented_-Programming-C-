/* C++ protected Inheritance */
/*protected inheritance makes the public and protected members of the base class protected in the derived class.*/

#include <iostream>
using namespace std;

class Base
{
  private  :
             int pvt  = 1;
  protected:
             int prot = 2;
  public   :
             int pub  = 3;
             // function to access private member
             int getpvt()
             {
                 return pvt;
             }
};

class Derived : protected Base
{
  public:
        // function to access public member from Base
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



