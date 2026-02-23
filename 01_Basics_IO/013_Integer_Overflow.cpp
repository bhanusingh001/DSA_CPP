/*
 * Problem: Integer Overflow
 * Description: Multiply 100000 * 100000. Show overflow in int. Fix it using long long.
 * Topic: Data Types
 * Date: 2026-02-23 23:41
 */

#include <iostream>
using namespace std;

int main(){
    int a = 100000 * 100000; // overflow
    cout << "int result: " << a << endl;

    long long b = 100000LL * 100000LL; // correct
    cout << "long long result: " << b << endl;
}