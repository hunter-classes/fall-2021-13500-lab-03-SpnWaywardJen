/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 3
*/


// add your code as appropriate 
#include <iostream>
#include "reservoir.h"

int main()
{
  std::cout << "Enter Date: 05/20/2018\n" << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons\n\n";
  std::cout << "Enter Date: 07/01/2018\n" << "East basin storage: " << get_east_storage("07/01/2018") << " billion gallons\n\n";
  std::cout << "Enter Date: 09/15/2018\n" << "East basin storage: " << get_east_storage("09/15/2018") << " billion gallons\n\n";
  
  std::cout << "Minimum storage in East basin: " << get_min_east() << " billion gallons\n\n"; 
  std::cout << "Maximum storage in East basin: " << get_max_east() << " billion gallons\n";
  return 0;
}
