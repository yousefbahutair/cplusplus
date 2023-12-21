#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape constructor called" << endl;
    }

    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {
        cout << "Rectangle constructor called" << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }

    int getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 3);
    int area = rect.getArea();
    cout << "Area: " << area << endl;

    return 0;
}