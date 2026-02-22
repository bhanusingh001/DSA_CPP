/*
 * Problem: Switch: Calculator
 * Description: Build calculator using switch on char operator. Handle +,-,*,/,% with default for invalid.
 * Topic: Switch
 * Date: 2026-02-22 23:59
 */

#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cin >> a >> op >> b;

    switch(op){
        case '+': cout<<a+b; break;
        case '-': cout<<a-b; break;
        case '*': cout<<a*b; break;
        case '/': cout<<a/b; break;
        case '%': cout<<a%b; break;
        default: cout<<"Invalid Operator";
    }
}