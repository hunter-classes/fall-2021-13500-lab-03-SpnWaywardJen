/*
Author: Jennifer Baranyai
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 3
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reverseorder.h"

void reverse_order(std::string date1, std::string date2) {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    std::string junk;
    getline(fin, junk);

    std::string rDate;
    double eastSt, eastEl, westSt, westEl;
    double data[365];
    std::string date[365];
    int x = 0;
    while(fin >> rDate >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');
        if(rDate >= date1 && rDate <= date2) {
            data[x] = westEl;
            date[x] = rDate;
            x++;
        }
        else if(rDate > date2)
            break;
    }
    fin.close();
    for(int i = x-1; i >= 0; i--){
        std::cout << date[i] << "\t" << data[i] << " ft" << std::endl;
    }
}