#include<iostream>
using namespace std;

int main() {
   int size;

   cout << "Enter the size of the array: ";
   cin >> size;
   int* arr = new int[size];
   cout << "Enter elements: ";
   for(int i=0; i<size; i++) {
      cin >> arr[i];
   }
   cout << "Elements in the array are: ";
   for(int i=0; i<size; i++) {
      cout << arr[i] << " ";
   }
   delete[] arr;

   return 0;
}