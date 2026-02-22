/*
 * Problem: Compound Assignment
 * Description: Start with int a=50. Apply +=10, -=5, *=2, /=3, %=7 sequentially. Print after each.
 * Topic: Operators
 * Date: 2026-02-22 23:46
 */

#include <iostream>
using namespace std;

int main(){
    int a=50;

    a+=10;
    cout << a << endl;

    a-=5;
    cout << a << endl;

    a*=2;
    cout << a << endl;

    a/=3;
    cout << a << endl;

    a%=7;
    cout << a << endl;
}