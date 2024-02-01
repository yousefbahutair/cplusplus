#include <iostream>
#include <memory>

using namespace std;

struct MyClass {
    MyClass() {
        cout << "MyClass constructor called." << endl;
    }

    ~MyClass() {
        cout << "MyClass destructor called." << endl;
    }

    void operator()(int* arr) const {
        delete[] arr;
        cout << "Custom deleter called." << endl;
    }
};

int main() {
    unique_ptr<int[], MyClass> arr(new int[5]{1, 2, 3, 4, 5});

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}