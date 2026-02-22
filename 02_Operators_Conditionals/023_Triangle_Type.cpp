/*
 * Problem: Triangle Type
 * Description: Read 3 sides of a valid triangle. Classify: equilateral, isosceles, or scalene.
 * Topic: Conditionals
 * Date: 2026-02-22 23:57
 */

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a==b && b==c)
        cout << "Equilateral";
    else if(a==b || b==c || a==c)
        cout << "Isosceles";
    else
        cout << "Scalene";
}