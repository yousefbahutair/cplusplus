#include <iostream>

using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    cout << "Area of circle: " << circle.calculateArea() << endl;
    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;

    return 0;
}