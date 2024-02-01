#include <iostream>
#include <memory>

using namespace std;

class SampleClass {
public:
    void printMessage() {
        cout << "Hello, C++!" << endl;
    }
};

int main() {
    shared_ptr<SampleClass> sharedPtr = make_shared<SampleClass>();
    sharedPtr->printMessage();

    return 0;
}