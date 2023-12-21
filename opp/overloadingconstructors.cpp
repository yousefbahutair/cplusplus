#include <iostream>
using namespace std;

class MyClass {
    int num1, num2;

public:
    MyClass() {
        num1 = 0;
        num2 = 0;
    }
    MyClass(int n1) {
        num1 = n1;
        num2 = 0;
    }
    MyClass(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    void display() {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
    }
};

int main() {
    MyClass obj1;
    cout << "Object 1:" << endl;
    obj1.display();
    cout << "Object 2:" << endl;
    obj2.display();
    cout << "Object 3:" << endl;
    obj3.display();

    return 0;
}