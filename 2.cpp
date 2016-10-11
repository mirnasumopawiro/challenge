//
//  2.cpp
//  11 oct
//
//  Created by Mirna Sumopawiro on 10/11/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Sales Prediction
//  The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year.

#include <iostream>
using namespace std;

int main() {
    float subSales = 8600000;
    float totalSales;
    float milTotalSales;
    
    totalSales = subSales * 58 / 100;
    
    milTotalSales = totalSales / 1000000;
    
    cout << "The division will generate $ " << milTotalSales << " million.";
    
    
    return 0;
}
