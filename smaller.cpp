#include <iostream>

int main () {
   int firstnum;
   int secondnum;
   std::cout << "Enter the first number: ";
   std::cin >> firstnum;
   std::cout << "Enter the second number: ";
   std::cin >> secondnum;
   
   if (firstnum > secondnum) {
      std::cout << "The smaller of the two is " << secondnum << ".\n"; 
   }
   
   if (secondnum > firstnum) {
      std::cout << "The smaller of the two is " << firstnum << ".\n"; 
   }
   return 0;
}
