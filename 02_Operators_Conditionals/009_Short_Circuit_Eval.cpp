/*
 * Problem: Short Circuit Eval
 * Description: Write code to prove short-circuit: in (false && func()), func() never executes. Print proof.
 * Topic: Operators
 * Date: 2026-02-22 23:44
 */

#include <iostream>
using namespace std;

bool func(){
    cout << "func() executed\n";
    return true;
}

int main(){

    cout << "Testing &&\n";
    if(false && func())
        cout << "Inside if\n";
    else
        cout << "Skipped func() in &&\n";


    cout << "\nTesting ||\n";
    if(true || func())
        cout << "Skipped func() in ||\n";
}