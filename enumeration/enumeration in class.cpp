#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void setInfo(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }

    void printInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book book1;
    book1.setInfo("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    book1.printInfo();

    Book book2;
    book2.setInfo("To Kill a Mockingbird", "Harper Lee", 1960);
    book2.printInfo();

    return 0;
}