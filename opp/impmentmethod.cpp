#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return 3.14 * radius * radius;
    }

    double getCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle circle(2.5);
    double radius = circle.getRadius();
    double area = circle.getArea();
    double circumference = circle.getCircumference();
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}