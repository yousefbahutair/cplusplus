#include <iostream>

class MyClass {
private:
    int* data;

public:
    MyClass() : data(nullptr) {}
    ~MyClass() {
        delete data;
    }
    MyClass(const MyClass& other) {
        data = new int;
        *data = *other.data;
        
        std::cout << "Copy constructor called" << std::endl;
    }
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this;
        }
        delete data;
        data = new int;
        *data = *other.data;
        
        std::cout << "Assignment operator called" << std::endl;
        
        return *this;
    }
    void setData(int value) {
        *data = value;
    }
    int getData() const {
        return *data;
    }
};

int main() {
    MyClass obj1;
    obj1.setData(10);
    
    MyClass obj2;
    obj2.setData(20);
    obj2 = obj1;
    
    std::cout << "Data in obj2: " << obj2.getData() << std::endl;
    
    return 0;
}