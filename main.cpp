/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 3
*/


// add your code as appropriate 
#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"

int main()
{
  std::cout << "Enter Date: 05/20/2018\n" << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons\n\n";
  std::cout << "Enter Date: 07/01/2018\n" << "East basin storage: " << get_east_storage("07/01/2018") << " billion gallons\n\n";
  std::cout << "Enter Date: 09/15/2018\n" << "East basin storage: " << get_east_storage("09/15/2018") << " billion gallons\n\n";
  
  std::cout << "Minimum storage in East basin: " << get_min_east() << " billion gallons\n\n"; 
  std::cout << "Maximum storage in East basin: " << get_max_east() << " billion gallons\n\n";
  
  std::cout << "Enter Date: 09/13/2018\n" << "The basin with the higher elevation is: " << compare_basins("09/13/2018") << "\n\n";
  std::cout << "Enter Date: 03/25/2018\n" << "The basin with the higher elevation is: " << compare_basins("03/25/2018") << "\n\n";
  std::cout << "Enter Date: 12/20/2018\n" << "The basin with the higher elevation is: " << compare_basins("12/20/2018") << "\n\n";

  std::cout << "Enter earlier date: 05/29/2018\n" << "Enter later date: 06/02/2018\n\n";
  
  reverse_order("05/29/2018", "06/02/2018");

  std::cout << "\nEnter earlier date: 03/20/2018\n" << "Enter later date: 03/25/2018\n\n";
  
  reverse_order("03/20/2018", "03/25/2018");

  return 0;
}
