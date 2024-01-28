#include <iostream>

class Base {
public:
    virtual void print() {
        std::cout << "This is the base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() {
        std::cout << "This is the derived class" << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;
  
    Base& baseRef = baseObj;
    baseRef.print();
  
    Base& derivedRef = derivedObj;
    derivedRef.print();

    return 0;
}