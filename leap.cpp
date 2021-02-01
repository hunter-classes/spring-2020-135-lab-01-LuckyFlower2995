#include <iostream>

int main() {
   int year;
   std::cout << "Enter year: ";
   std::cin >> year;
   
   if (year % 4 != 0) {
      std::cout << "It's a common year.\n";
   } else if (year % 100 != 0) {
      std::cout << "It's a leap year.\n"; 
   } else if (year % 400 != 0) {
      std::cout << "Its's a common year.\n";
   } else {
      std::cout << "It's a leap year.\n";
   }
   return 0;
}
