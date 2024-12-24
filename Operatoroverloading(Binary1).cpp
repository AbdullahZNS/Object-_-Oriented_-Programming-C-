/// C++ program to demonstrate the binary operator overloading


#include <iostream>
using namespace std;

///class class name
class Complex 
{
  private:
          int real,imag;
  public:
         void set_data(int r, int i)
         {
          real = r;
          imag = i;
         }
   /* This is automatically called when '+' is used with between two Complex objects*/        
 Complex operator + (Complex C4)
 {
  Complex temp;
  temp.real = real + C4.real;
  temp.imag = imag + C4.imag;
  return temp;
 }
 void print()
 {
     if(imag < 0)
     {
       cout << real << " - " << -imag << "i" << endl;   
     }
     else
     {
        cout << real << " + " << imag << "i" << endl;   
     }
   
 }
 
};
int main() 
{
  Complex C1,C2,C3;
  C1.set_data(10,5);
  C2.set_data(2,4);
  C3 = C1 + C2;
  C3.print();
    return 0;
}
