#include <iostream>

class Yousef {
    private:
        double length;
        double width;
        double height;
    
    public:
        Yousef(double length = 0, double width = 0, double height = 0) {
            this->length = length;
            this->width = width;
            this->height = height;
        }
        
        double getVolume() const {
            return length * width * height;
        }
        
        bool operator==(const Yousef& other) const {
            return (length == other.length) && (width == other.width) && (height == other.height);
        }
        
        bool operator!=(const Yousef& other) const {
            return !(*this == other);
        }
};

int main() {
    Yousef yousef1(3, 4, 5);
    Yousef yousef2(3, 4, 5);
    Yousef yousef3(2, 4, 6);
    
    if (yousef1 == yousef2) {
        std::cout << "Yousef1 is equal to Yousef2" << std::endl;
    } else {
        std::cout << "Yousef1 is not equal to Yousef2" << std::endl;
    }
    
    if (yousef1 != yousef3) {
        std::cout << "Yousef1 is not equal to Yousef3" << std::endl;
    } else {
        std::cout << "Yousef1 is equal to Yousef3" << std::endl;
    }
    
    return 0;
}