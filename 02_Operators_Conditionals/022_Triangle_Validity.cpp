/*
 * Problem: Triangle Validity
 * Description: Read 3 side lengths. Check if they form a valid triangle (sum of any 2 sides > third).
 * Topic: Conditionals
 * Date: 2026-02-22 23:57
 */

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a+b>c && a+c>b && b+c>a)
        cout << "Valid Triangle";
    else
        cout << "Not Valid";
}