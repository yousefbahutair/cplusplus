#include <iostream>
using namespace std;

int main() {
   int x = 10;

   int y = x + 5;
   y += 1;

   int&& z = x+2;
   z += 2;

   cout << "x = " << x << endl;
   cout << "y = " << y << endl;
   cout << "z = " << z << endl;

   return 0;
}