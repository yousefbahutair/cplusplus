#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("output.txt");

    if (!outputFile.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    outputFile << "Hello, World!" << endl;
    outputFile << "This is a sample text written to a file." << endl;

    outputFile.close();

    return 0;
}