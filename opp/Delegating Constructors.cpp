#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() : Point(0, 0) {
        cout << "Using Delegating Constructor with default values" << endl;
    }

    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {
        cout << "Using Actual Constructor with two arguments" << endl;
    }

    void PrintPoint() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

class Circle {
private:
    Point center;
    double radius;

public:
    Circle() : Circle(Point(), 1.0) {
        cout << "Using Delegating Constructor with default values" << endl;
    }

    Circle(Point c, double r) : center(c), radius(r) {
        cout << "Using Actual Constructor with two arguments" << endl;
    }

    void PrintCircle() {
        cout << "Circle Center: ";
        center.PrintPoint();
        cout << "Radius: " << radius << endl;
    }
};

int main() {
    Circle circle1;
    circle1.PrintCircle();
    cout << endl;

    Point center(2, 4);
    Circle circle2(center, 3.5);
    circle2.PrintCircle();
    cout << endl;

    return 0;
}