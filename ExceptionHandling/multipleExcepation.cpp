#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
   int num1, num2;

   try {
      cout << "Enter first number: ";
      cin >> num1;
      cout << "Enter second number: ";
      cin >> num2;

      if (num2 == 0) {
         throw runtime_error("Division by zero not allowed");
      }

      int result = num1 / num2;
      cout << "Result: " << result << endl;
   }
   catch (runtime_error& e) {
      cout << "Runtime error: " << e.what() << endl;
   }
   catch (range_error& e) {
      cout << "Range error: " << e.what() << endl;
   }
   catch (domain_error& e) {
      cout << "Domain error: " << e.what() << endl;
   }
   catch (exception& e) {
      cout << "Exception occurred: " << e.what() << endl;
   }
   catch (...) {
      cout << "An unknown exception occurred" << endl;
   }

   return 0;
}