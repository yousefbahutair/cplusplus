#include <iostream>
#include <memory>

using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {
        cout << "Circle created with radius: " << radius << endl;
    }
    ~Circle() {
        cout << "Circle destroyed" << endl;
    }
    void displayArea() {
        double area = 3.14 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};

int main() {
    unique_ptr<Circle> circlePtr(new Circle(5.0));
    circlePtr->displayArea();

    return 0;
}