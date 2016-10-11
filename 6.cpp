//
//  6.cpp
//  11 oct
//
//  Created by Mirna Sumopawiro on 10/11/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  Annual Pay
/*  Suppose an employee gets paid every two weeks and earns $2,200 each pay period. In a year the employee gets paid 26 times. Write a program that defines the following variables:
payAmount
payPeriods
annualPay
This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0.
This variable will hold the number of pay periods in a year. Initialize the variable with 26.
This variable will hold the employee’s total annual pay, which will be calculated.
The program should calculate the employee’s total annual pay by multiplying the employee’s pay amount by the number of pay periods in a year and store the result in the annualPay variable. Display the total annual pay on the screen.*/

#include <iostream>
using namespace std;

int main() {
    float payAmount = 2200.0;
    float payPeriods = 26;
    float annualPay;
    
    annualPay = payAmount * payPeriods;
    
    cout << "The employee's annual pay is $" << annualPay;
    
    
    
    
    return 0;
}