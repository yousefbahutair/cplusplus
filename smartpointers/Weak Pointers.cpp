include <iostream>
#include <memory>

using namespace std;

class MyClass {
public:
    weak_ptr<int> weakData;
  
    MyClass(shared_ptr<int> data) : weakData(data) {
        cout << "MyClass constructor called" << endl;
    }
  
    ~MyClass() {
        cout << "MyClass destructor called" << endl;
    }
  
    void printData() {
        shared_ptr<int> sp = weakData.lock();
        if (sp) {
            cout << "The value is: " << *sp << endl;
        } else {
            cout << "The weak pointer has expired." << endl;
        }
    }
};

int main() {
    shared_ptr<int> sp(new int(10));
    weak_ptr<int> wp = sp;
    
    cout << "Weak pointer expired: " << wp.expired() << endl;
    cout << "Weak pointer lock: " << wp.lock() << endl;
    
    {shared_ptr<MyClass> obj(new MyClass(sp));
        obj->printData();
    }
    
    cout << "Weak pointer expired: " << wp.expired() << endl;
    cout << "Weak pointer lock: " << wp.lock() << endl;
    
    return 0;
}