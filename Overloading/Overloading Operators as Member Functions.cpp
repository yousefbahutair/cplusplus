#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0)
        : real(real), imaginary(imaginary) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator*(const Complex& other) const {
        double newReal = (real * other.real) - (imaginary * other.imaginary);
        double newImaginary = (imaginary * other.real) + (real * other.imaginary);
        return Complex(newReal, newImaginary);
    }

    bool operator==(const Complex& other) const {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    friend std::ostream& operator<<(std::ostream& out, const Complex& complex) {
        if (complex.imaginary >= 0) {
            out << complex.real << " + " << complex.imaginary << "i";
        } else {
            out << complex.real << " - " << -complex.imaginary << "i";
        }
        return out;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);

    Complex sum = c1 + c2;
    Complex difference = c2 - c1;
    Complex product = c1 * c2;

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;

    if (c1 == c2) {
        std::cout << "c1 is equal to c2" << std::endl;
    } else {
        std::cout << "c1 is not equal to c2" << std::endl;
    }

    return 0;
}