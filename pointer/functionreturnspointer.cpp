#include<iostream>
using namespace std;

int* createArray(int size) {
   int* arr = new int[size];

   for(int i=0; i<size; i++) {
      arr[i] = i+1;
   }

   return arr;
}

int main() {
   int size;

   cout << "Enter the size of the array: ";
   cin >> size;

   int* arr = createArray(size);

   cout << "Elements in the array are: ";
   for(int i=0; i<size; i++) {
      cout << arr[i] << " ";
   }

   delete[] arr;

   return 0;
}