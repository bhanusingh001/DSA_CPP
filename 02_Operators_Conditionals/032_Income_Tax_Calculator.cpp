/*
 * Problem: Income Tax Calculator
 * Description: Read annual income. Calculate tax: 0-2.5L=0%, 2.5-5L=5%, 5-10L=20%, 10L+=30%.
 * Topic: Conditionals
 * Date: 2026-02-23 23:50
 */

#include <iostream>
using namespace std;

int main(){
    double income,tax=0;
    cin>>income;

    if(income<=250000) tax=0;
    else if(income<=500000) tax=(income-250000)*0.05;
    else if(income<=1000000) tax=250000*0.05 + (income-500000)*0.20;
    else tax=250000*0.05 + 500000*0.20 + (income-1000000)*0.30;

    cout<<tax;
}