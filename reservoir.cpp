/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 3
*/

// add your code
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"


double get_east_storage(std::string date) {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    std::string junk;
    getline(fin, junk);

    std::string rDate;
    double eastSt, eastEl, westSt, westEl;
    while(fin >> rDate >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');
        //std::cout << rDate << " " << eastSt << std::endl;
        if(rDate == date) {
            return eastSt;
        }
    }
    fin.close();
    return 0;
}