/*
 * Problem: Relational Operators
 * Description: Read two numbers. Print results of ==, !=, <, >, <=, >= comparisons as true/false.
 * Topic: Operators
 * Date: 2026-02-22 23:38
 */

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;

    cout << boolalpha;
    cout << (x==y) << endl;
    cout << (x!=y) << endl;
    cout << (x<y) << endl;
    cout << (x>y) << endl;
    cout << (x<=y) << endl;
    cout << (x>=y) << endl;
}