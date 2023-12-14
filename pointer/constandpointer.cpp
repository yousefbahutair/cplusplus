#include<iostream>
using namespace std;

int main() {
   int num = 10;
   const int* ptr1 = &num;
   cout << "Value of num: " << num << endl;
   cout << "Value of ptr1: " << *ptr1 << endl;
   int value = 50;
   ptr1 = &value;
   cout << "Updated value of ptr1: " << *ptr1 << endl;
   int* const ptr2 = &num;
   cout << "Value of ptr2: " << *ptr2 << endl;
   *ptr2 = 20;
   cout << "Updated value of num: " << num << endl;
   const int* const ptr3 = &num;
   cout << "Value of ptr3: " << *ptr3 << endl;

   return 0;
}
