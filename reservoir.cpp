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

double get_min_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    std::string junk;
    getline(fin, junk);

    std::string rDate;
    double eastSt, eastEl, westSt, westEl;
    double minEast = INT_MAX;
    while(fin >> rDate >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');
        //std::cout << rDate << " " << eastSt << std::endl;
        if(eastSt < minEast) {
            minEast = eastSt;
        }
    }
    fin.close();
    return minEast;
}

double get_max_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    std::string junk;
    getline(fin, junk);

    std::string rDate;
    double eastSt, eastEl, westSt, westEl;
    double maxEast = INT_MIN;
    while(fin >> rDate >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n');
        //std::cout << rDate << " " << eastSt << std::endl;
        if(eastSt > maxEast) {
            maxEast = eastSt;
        }
    }
    fin.close();
    return maxEast;
}