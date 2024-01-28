#include <iostream>

class Base final {
public:
    void foo() {
        std::cout << "Base::foo() called" << std::endl;
    }
};

class Derived : public Base {
public:
    void foo() { 
        std::cout << "Derived::foo() called" << std::endl;
    }
};

int main() {
    Base base;
    base.foo();

    Derived derived;
    derived.foo();

    return 0;
}