#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        name = "John Doe";
        age = 0;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person;
    person.setName("Alice");
    person.setAge(25);
    person.displayInfo();

    return 0;
}