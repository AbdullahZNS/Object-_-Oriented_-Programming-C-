 /*C++ program to Demonstrate Operator Overloading */
#include <iostream>
using namespace std;

class Distance
{
  private:
          int feet;
          double inches;
  public:
         Distance()
         {
             feet   = 0;
             inches = 0;
         }
         Distance(int f, double i)
         {
             feet   = f;
             inches = i;
         }
         /* This is automatically called when '+' is used with between two Complex objects*/
         Distance operator + (Distance d4)
         {
           Distance temp;

           temp.feet   = feet + d4.feet;
           temp.inches = inches + d4.inches;

           if(temp.inches >= 12.0)
           {
               temp.feet ++;
               temp.inches -= 12.0;
           }

           return temp;
         }



         void showdis()
         {
             cout << "Feet = " << feet << endl <<"Inches = " <<inches<<endl;
         }

};

int main()
{

  Distance d1(5,7.5) , d2(7,9.5),d3;

  d3 = d1 + d2;
  d3.showdis();



    return 0;
}
