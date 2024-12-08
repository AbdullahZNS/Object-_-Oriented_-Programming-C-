
// C++ program to implement Multilevel Inheritance
#include <iostream>
using namespace std;

//Base class
class XRP
{
 public:
 void getxrp()
 {
 
  
  cout << "xrp will be one of the topest successful cryptocurrency in the world." << endl;
  
 }
};
// derived class from base class
class SHIB : public XRP
{
 public:
        void getshib()
        {
          cout <<"I will invest in SHIB around 100$." << endl; 
        }
};
// derived from class XRP
class Cryptocurrency : public SHIB
{
 public:
        void getinvest()
        {
          cout << "I will invest around 300$ in cryptocurrency within ten months IN SHA ALLAH." << endl;   
        }
};
int main() {
  // object of sub class 
 Cryptocurrency obj;
 obj.getinvest();
 obj.getxrp();
 obj.getshib();
    return 0;
}
