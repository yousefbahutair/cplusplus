#include <iostream>
using namespace std;
int main() {
    int x = 10; 
    int* ptr = &x; 

    cout << "Value of x: " << x << std::endl;
    cout << "Value of ptr: " << ptr << std::endl;
    cout << "Dereferencing pointer: " << *ptr << std::endl;

    return 0;
}