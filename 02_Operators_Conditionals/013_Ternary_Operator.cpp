/*
 * Problem: Ternary Operator
 * Description: Find max of two numbers using ternary (?:). Then find max of three using nested ternary.
 * Topic: Operators
 * Date: 2026-02-22 23:48
 */

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int max2 = (a>b)?a:b;
    cout << "Max of two: " << max2 << endl;

    int max3 = (a>b)? (a>c?a:c) : (b>c?b:c);
    cout << "Max of three: " << max3;
}