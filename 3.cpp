//
//  3.cpp
//  11 oct
//
//  Created by Mirna Sumopawiro on 10/11/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Sales Tax
//  Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent and the county sales tax is 2 percent.

#include <iostream>
using namespace std;

int main() {
    float subTotal = 95;
    float stateTax;
    float countyTax;
    float grandTotal;
    
    //state tax = 4%
    
    stateTax = subTotal * 4 / 100;
    
    //county tax = 2%
    
    countyTax = subTotal * 2 / 100;
    
    //grand total
    
    grandTotal = subTotal + stateTax + countyTax;
    
    cout << "The grand total is $ " << grandTotal;





    return 0;
}