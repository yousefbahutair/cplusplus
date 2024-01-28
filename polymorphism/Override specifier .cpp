#include <iostream>
#include <string>

class Shape {
public:
    virtual std::string getType() const {
        return "Shape";
    }
    virtual double getArea() const = 0;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double length, double width) : length(length), width(width) {}

    std::string getType() const override {
        return "Rectangle";
    }

    double getArea() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}

    std::string getType() const override {
        return "Circle";
    }

    double getArea() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* shapePtr = new Rectangle(5, 3);
    std::cout << "Type: " << shapePtr->getType() << std::endl;
    std::cout << "Area: " << shapePtr->getArea() << std::endl;
    delete shapePtr;

    shapePtr = new Circle(4);
    std::cout << "Type: " << shapePtr->getType() << std::endl;
    std::cout << "Area: " << shapePtr->getArea() << std::endl;
    delete shapePtr;

    return 0;
}