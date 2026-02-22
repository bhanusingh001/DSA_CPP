/*
 * Problem: Logical Operators
 * Description: Read an integer. Check if it is between 10 and 100 (inclusive) using && operator.
 * Topic: Operators
 * Date: 2026-02-22 23:39
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n>=10 && n<=100)
        cout << "true";
    else
        cout << "false";
}