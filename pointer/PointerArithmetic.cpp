#include<iostream>
using namespace std;

int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int* ptr = arr;

   cout << "Values using pointer arithmetic: ";
   for(int i=0; i<5; i++) {
      cout << *(ptr + i) << " ";
   }

   cout << endl;

   cout << "Address using pointer arithmetic: ";
   for(int i=0; i<5; i++) {
      cout << (ptr + i) << " ";
   }

   return 0;
}