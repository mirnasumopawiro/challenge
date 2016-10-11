//
//  7.cpp
//  11 oct
//
//  Created by Mirna Sumopawiro on 10/11/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//Ocean Levels
/* Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be in 10 years */


#include <iostream>
using namespace std;

int main() {
    
    float oceanRise = 1.5;
    float oceanRise5 = 1.5 * 5;
    float oceanRise7 = 1.5 * 7;
    float oceanRise10 = 1.5*10;
    
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 5 years is " << oceanRise5 << " millimeters" << endl;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 7 years is " << oceanRise7 << " millimeters" << endl;
    cout << "The number of millimeters higher than the current level that the ocean's level will be in 10 years is " << oceanRise10 << " millimeters" << endl;
    
    
    return 0;
}