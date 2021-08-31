#include <iostream>

int main() {
  int year;
  std::cout<<"Enter a 4-digit year: "; std::cin>>year;
  
  if (year < 1000) {
    std::cout<<"The year must be a valid 4-digit number. Please try again.\n";
    return 0;
  }

  if (year % 4 == 0 && year % 100 != 0){
    std::cout<<"The year "<<year<<" is a leap year.\n";
  } else if (year % 100 == 0 && year % 400 == 0){
    std::cout<<"The year "<<year<<" is a leap year.\n";
  } else if (year % 100 == 0 && year % 400 != 0){
    std::cout<<"The year "<<year<<" is a NOT leap year.\n";
  } else {
    std::cout<<"The year "<<year<<" is NOT a leap year.\n";
  }

  return 0;
}