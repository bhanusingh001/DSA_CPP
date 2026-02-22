/*
 * Problem: Comma Operator
 * Description: What is the value of: int a = (5, 10, 15); ? Explain the comma operator.
 * Topic: Operators
 * Date: 2026-02-22 23:52
 */

#include <iostream>
using namespace std;

int main(){
    int a = (5, 10, 15);
    cout << a;
    cout<< "\n" <<  "Comma operator evaluates left ? right but returns last value. ";    
}