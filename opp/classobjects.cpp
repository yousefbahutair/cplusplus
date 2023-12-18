#include <iostream>
using namespace std;


class Car {
    private:
       
        string brand;
        string model;
        int year;

    public:
     
        Car(string b, string m, int y) {
            brand = b;
            model = m;
            year = y;
        }

        
        void displayDetails() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

int main() {
   
    Car car1("Toyota", "Camry", 2021);
    Car car2("Honda", "Civic", 2022);

    cout << "Car 1 details:" << endl;
    car1.displayDetails();
    cout << endl;

    cout << "Car 2 details:" << endl;
    car2.displayDetails();
    cout << endl;

    return 0;
}