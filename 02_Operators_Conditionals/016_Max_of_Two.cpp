/*
 * Problem: Max of Two
 * Description: Read two integers. Print the larger one without using max() function.
 * Topic: Conditionals
 * Date: 2026-02-22 23:53
 */

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a>b)
        cout << a;
    else
        cout << b;
}