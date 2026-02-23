/*
 * Problem: Right Triangle Check
 * Description: Read 3 sides. Check if they form a right triangle using Pythagorean theorem.
 * Topic: Conditionals
 * Date: 2026-02-23 23:47
 */

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        cout<<"Right Triangle";
    else
        cout<<"Not Right Triangle";
}