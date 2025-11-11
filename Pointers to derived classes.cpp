#include <iostream>
using namespace std;

class base
{
 private: 
     int x;
 public:
     void setx(int i)
     {
     x = i;
     }
     
     int getx()
     {
     return x;
     }
};

class derived : public base
{
 private:
     int y;
 public:
     void sety(int i)
     {
      y = i;   
     }
     
     int gety()
     {
     return y;
     }
};
int main()
{
    
base b_ob;
derived d_ob;

base* ptr;
ptr = & b_ob;
ptr -> setx(100);
cout << "x =  " << ptr -> getx() << "(using base class pointer)" << endl;

derived* p;
p = & d_ob;
p -> sety(200);
cout << "y =  " << p -> gety() << "(using derived class pointer)" << endl;

ptr = & d_ob;
ptr -> setx(300);
cout << "x =  " << ptr -> getx() << "(using base class pointer)" << endl;





 
 
 
    return 0;
}
