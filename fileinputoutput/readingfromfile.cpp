#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    std::ifstream inputFile("example.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    inputFile.close();

    return 0;
}