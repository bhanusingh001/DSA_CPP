/*
 * Problem: Max of Three
 * Description: Read three integers. Print the largest using nested if-else (no max function).
 * Topic: Conditionals
 * Date: 2026-02-22 23:54
 */

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a>b){
        if(a>c)
            cout << a;
        else
            cout << c;
    }
    else{
        if(b>c)
            cout << b;
        else
            cout << c;
    }
}