/*
 * Problem: Electricity Bill
 * Description: Read units consumed. Calculate bill: 0-100@?1.50, 101-300@?2.50, 300+@?4.00 per unit.
 * Topic: Conditionals
 * Date: 2026-02-23 23:50
 */

#include <iostream>
using namespace std;

int main(){
    int units;
    cin>>units;
    double bill;

    if(units<=100)
        bill = units*1.5;
    else if(units<=300)
        bill = 100*1.5 + (units-100)*2.5;
    else
        bill = 100*1.5 + 200*2.5 + (units-300)*4;

    cout<<bill;
}