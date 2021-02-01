#include <iostream>

int main () {
   int year;
   int month;
   std::cout << "Enter year: ";
   std::cin >> year;
   std::cout << "Enter month: ";
   std::cin >> month;
   
   if (month == 2 and year % 4 == 0) {
      std::cout << "29 days\n";
   } else if (month == 2 and year % 4 != 0) {
      std::cout << "28 days\n";
   } else if (month != 2 and month % 2 == 0) {
      std::cout << "30 days\n";
   } else if (month != 2 and month % 2 != 0) {
      std::cout << "31 days\n";
   }
   return 0;
}
