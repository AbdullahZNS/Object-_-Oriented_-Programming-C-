 /*C++ program to Demonstrate Operator Overloading */

#include <iostream>
using namespace std;

class Complex
{
  private:
          int real,image;
  public:
          Complex()
          {
          real = 0;
          image = 0;
          }

          Complex(int r, int i )
          {
              real  = r;
              image = i;
          }
          /* This is automatically called when '+' is used with between two Complex objects*/
          Complex operator + (Complex c4)
          {
              Complex temp;

              temp.real = real + c4.real;
              temp.image = image + c4.image;

              return temp;
          }

          void show()
          {
             if(image < 0)
             {
             cout << real << " - " << -image << "i" << endl;
             }

              else
              {

             cout << real << " + " << image << "i" << endl;
              }
          }
};



int main()
{

Complex c1(10,-5),c2(2,-4),c3;

c3 = c1 + c2;
c3.show();







    return 0;
}
