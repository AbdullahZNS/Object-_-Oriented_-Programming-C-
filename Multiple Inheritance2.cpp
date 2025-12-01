// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A
{
 public:
    A()
    {
    cout << "Class A's Constructor." << endl;
    }
    
};

class B
{
 public:
    B()
    {
    cout << "Class B's Constructor." << endl;
    }
};

class C : public A, public B
{
public: 
   C()
   {
   cout << "Class C's Constructor. " << endl;
   }
};

int main() {
    
 C c_ob;   
    
    
    return 0;
}
