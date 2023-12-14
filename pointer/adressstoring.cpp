#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr;

    ptr = &num;

    cout << "Address of num: " << &num << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    return 0;
}
