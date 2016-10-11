//
//  5.cpp
//  11 oct
//
//  Created by Mirna Sumopawiro on 10/11/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//  4 done
//  Average of Values
//  To get the average of a series of values, you add the values up and then divide the sum by the number of values. Write a program that stores the following values in five dif- ferent variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five variables and store the result in a separate variable named sum. Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen.

#include <iostream>
using namespace std;

int main() {
    double var1 = 28;
    double var2 = 32;
    double var3 = 37;
    double var4 = 24;
    double var5 = 33;
    double sum;
    double average;
    
    sum = var1 + var2 + var3 + var4 + var5;
    
    average = sum / 5;
    
    cout << "The average is " << average;
    
    
    return 0;
}