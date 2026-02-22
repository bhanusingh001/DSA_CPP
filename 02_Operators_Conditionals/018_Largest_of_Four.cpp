/*
 * Problem: Largest of Four
 * Description: Read four integers. Find and print the largest without using arrays or max().
 * Topic: Conditionals
 * Date: 2026-02-22 23:56
 */

#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,largest;
    cin >> a >> b >> c >> d;

    largest = a;

    if(b>largest) largest=b;
    if(c>largest) largest=c;
    if(d>largest) largest=d;

    cout << largest;
}