// IO Manipulators dec,oct,hex
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
   
   
   cout << 200 << endl;
   cout << dec << 200 << endl;
   cout << oct << 200 << endl;
   cout << hex << 200 << endl;

    return 0;
}

//IO Manipulators Default , Fixed, Scientific

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
   double a = 1234.0;
   double b = 123.34;
   
   cout << "Default" << endl;
   cout << a << " " << b << endl << endl;
   
   cout << "Fixed" << endl;
   cout << fixed << a << " " << b << endl << endl;
   
   cout << "Scientific" << endl;
   cout << scientific << a << " " << b << endl;
   return 0;
}

//IO Manipulator showpos, noshowpos

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
  cout << 200 << endl;
  cout << showpos << 200 << endl;
  cout << showpos << -200 << endl;
  cout << 400 << endl;
  cout << noshowpos << 500 << endl;
   
   
   return 0;
}
