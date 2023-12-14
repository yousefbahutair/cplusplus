#include<iostream>
using namespace std;
void swapIntegers(int* a, int* b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}
int main() {
   int num1 = 10, num2 = 20;
   cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
   swapIntegers(&num1, &num2);
   cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

   return 0;
}