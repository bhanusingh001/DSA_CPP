/*
 * Problem: Bool Operations
 * Description: Demonstrate &&, ||, ! with bool values. Print bool as 0/1 and as true/false.
 * Topic: Data Types
 * Date: 2026-02-23 23:44
 */

#include <iostream>
using namespace std;

int main(){
    bool a=true, b=false;

    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << (!a) << endl;

    cout << boolalpha;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << (!a) << endl;
}