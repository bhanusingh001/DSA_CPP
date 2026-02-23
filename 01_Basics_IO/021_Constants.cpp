/*
 * Problem: Constants
 * Description: Declare const int MAX = 100. Try to modify it. Observe the compiler error.
 * Topic: Data Types
 * Date: 2026-02-23 23:46
 */

#include <iostream>
using namespace std;

int main(){
    const int MAX = 100;
    MAX = 200; // compiler error
    cout << MAX;
}