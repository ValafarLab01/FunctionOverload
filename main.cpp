/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on September 8, 2017, 10:00 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

double myPower(double a, double b, int c); 
//Functions can be overloaded based on the argument types
double myPower(int a, int b, int c);
//Functions can be overloaded based on the number of arguments
double myPower(double, int c);


/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "(1.1+2.0)^ 2= " << myPower(1.1, 2.0, 2) << endl;
    cout << "(1+2)^2 = " << myPower(1,2,2) << endl;
     cout << "(2.0)^ 2= " << myPower(2.0, 2) << endl;

    return 0;
}

double myPower(double a, double b, int c){
    double sum(a+b);
    double product(1);
    
    cout << "I am in myPower(double, double, int) " << endl;
    
    for(int i=0; i < c; i++) {
        product *= sum;
    }
    return product;
}

double myPower(int a, int b, int c){
    int sum(a+b);
    int product(1);
    
    cout << "I am in myPower(int, int, int) " << endl;
    
    for(int i=0; i < c; i++) {
        product *= sum;
    }
    return product;
}

double myPower(double a, int c){
    double sum(a);
    double product(1);
    
    cout << "I am in myPower(double, int) " << endl;
    
    for(int i=0; i < c; i++) {
        product *= sum;
    }
    return product;
}