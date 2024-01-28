#include<iostream>

class Base {
public:
    virtual void display() {
        std::cout << "This is the Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() {
        std::cout << "This is the Derived class" << std::endl;
    }
};

int main() {
    Base* basePointer;
    Base baseObj;
    Derived derivedObj;
    basePointer = &baseObj;
    basePointer->display();
    basePointer = &derivedObj;
    basePointer->display();

    return 0;
}
```