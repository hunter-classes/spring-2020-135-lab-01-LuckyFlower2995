#include <iostream>

int main() {
   int firstnum;
   int secondnum;
   int thirdnum;
   int smallernum;
   
   std::cout << "Enter the first number: ";
   std::cin >> firstnum;
   std::cout << "Enter the second number: ";
   std::cin >> secondnum;
   std::cout << "Enter the third number: ";
   std::cin >> thirdnum;
   
   if (firstnum > secondnum) {
      smallernum = secondnum;
   } else {
      smallernum = firstnum;   
   }
   
   if (smallernum > thirdnum) {
      smallernum = thirdnum;
   } 
   std::cout << "The smaller of the three is " << smallernum <<".\n";
   
   return 0;
   
}
