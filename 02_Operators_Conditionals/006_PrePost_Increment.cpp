/*
 * Problem: Pre/Post Increment
 * Description: Given int b=5. Compute a=++b and a=b++. Print a and b after each. Explain difference.
 * Topic: Operators
 * Date: 2026-02-22 23:36
 */

#include <iostream>
using namespace std;

int main(){
    int a,b;

    b=5;
    a=++b;  // prefix increment - first b is incremented(6) then assigned to a(6)
    cout << "a=" << a << " " << "b=" << b << endl;

    b=5; 
    a=b++; // Post increment - first b is assigned to a (a=5) then b is incremented(b=6)
    cout << "a=" << a<< " " << "b=" << b << endl;
}