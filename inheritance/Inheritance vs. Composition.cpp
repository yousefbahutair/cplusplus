#include <iostream>
using namespace std;
class Shape {
public:
    void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing circle" << endl;
    }
};

class Square {
public:
    void drawSquare() {
        cout << "Drawing square" << endl;
    }
};

class SquareAdapter : public Shape {
private:
    Square* square;
public:
    SquareAdapter(Square* s) : square(s) {}
  
    void draw() {
        square->drawSquare();
    }
};

int main() {
    Circle circle;
    circle.draw();
    circle.drawCircle();
    Square s;
    SquareAdapter squareAdapter(&s);
    squareAdapter.draw();
  
    return 0;
}