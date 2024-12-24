#include <iostream>
using namespace std;

class Distance
{
 private:
         int feet;
         double inches;
 public:
        void set_data(int f, double i)
        {
            feet = f;
            inches = i;
        }
        
        Distance operator +(Distance D4)
        {
         Distance temp;
         temp.feet = feet + D4.feet;
         temp.inches = inches + D4.inches;
         if(temp.inches >= 12)
         {
             temp.feet = temp.feet + 1;
             temp.inches = temp.inches - 12;
         }
         
         return temp;
        }
        
        void print()
        {
            cout << "Distance is : " << feet <<"feet" << " " << inches <<"inches " << endl;
        }
};


int main()
{
   Distance D1,D2,D3;
   D1.set_data(5,10);
   D2.set_data(6,3);
   D3 = D1 + D2;
   D3.print();
   
   
   
    return 0;
}
