#include<iostream>
using namespace std;

class MyClass {
protected:
    int protectedNum;
public:
    void setProtectedNum(int num) {
        protectedNum = num;
    }
    int getProtectedNum() {
        return protectedNum;
    }
};

class DerivedClass : public MyClass {
public:
    void displayProtectedNum() {
        cout << "Protected number in the derived class: " << protectedNum << endl;
    }
};

int main() {
    DerivedClass obj;
    
    obj.setProtectedNum(10);
    cout << "Protected number in the base class: " << obj.getProtectedNum() << endl;
    
    obj.displayProtectedNum();
    
    return 0;
}