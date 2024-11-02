/*
Constructor Overloading: The use of multiple constructors in the same class is known as Constructor Overloading.

Condition:
           1. All the constructors in the same class should have a different parameters.
        Or 2. All the constructors in the same class should have same number of parameters and different data types.

*/




#include <iostream>
using namespace std;

class construct //The Class name
{
 public:

    double area;

      construct() //Constructor function with no parameter
     {
      area = 0;
     }

     construct(int a, int b) //Constructor function with two parameter
     {
         area = a * b;
     }

     void display()
     {
         cout << area << endl;
     }

};




int main()
{
  construct obj1; // whenever object is created ,constructor without parameter is called.
  obj1.display();// display function is called to show the area

  construct obj2(10,20);//whenever object is created ,constructor with parameter is called.
  obj2.display();// display function is called to show the area







    return 0;
}
