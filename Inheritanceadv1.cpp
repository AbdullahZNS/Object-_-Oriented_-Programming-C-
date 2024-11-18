#include <iostream>
using namespace std;

class Base
{
  private:
           int pvt = 1;
  protected:
            int prot = 2;
  public:
            int pub  = 3;
            int getpvt()
            {
                return pvt;
            }
};

class Derived : public Base
{
    public:
           int getprot()
           {
               return prot;
           };
};


int main()
{
 Derived obj;
 cout << "Public    = " << obj.pub << endl;
 cout << "Protected = " << obj.getprot() << endl;
 cout << "Public    = " << obj.getpvt() << endl;

    return 0;
}
