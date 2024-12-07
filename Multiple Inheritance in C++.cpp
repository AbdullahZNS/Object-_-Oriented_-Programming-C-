#include <iostream>
using namespace std;


class XRP
{
 public:
 void getxrp()
 {

  cout << "xrp will be one of the topest successful cryptocurrency in world." <<endl;
 }
};

class SHIB
{
    public:
    void getSHIB()
    {

    cout <<"I will invest in SHIB around 100$." << endl;
    }
};

class Cryptocurrency : public XRP, public SHIB
{
 public:
        void getinvest()
        {
            cout << "I will invest in cryptocurrency around 300$ within ten months IN SHA ALLAH." <<endl;
        }
};
int main() {

    Cryptocurrency obj;

    obj.getxrp();
    obj.getSHIB();
    obj.getinvest();



    return 0;
}
