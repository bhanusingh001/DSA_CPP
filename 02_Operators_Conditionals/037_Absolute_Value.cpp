/*
 * Problem: Absolute Value
 * Description: Read an integer. Print its absolute value without using abs() function.
 * Topic: Conditionals
 * Date: 2026-02-23 23:53
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<0) n = -n;
    cout<<n;
}