/*
 * Problem: Simple Calculator
 * Description: Read two numbers and an operator (+,-,*,/,%). Perform the operation. Handle division by zero.
 * Topic: Conditionals
 * Date: 2026-02-23 23:52
 */

#include <iostream>
using namespace std;

int main(){
    double a,b;
    char op;
    cin>>a>>op>>b;

    if(op=='/' && b==0){
        cout<<"Division by zero error";
        return 0;
    }

    switch(op){
        case '+': cout<<a+b; break;
        case '-': cout<<a-b; break;
        case '*': cout<<a*b; break;
        case '/': cout<<a/b; break;
        case '%': cout<<(int)a%(int)b; break;
        default: cout<<"Invalid operator";
    }
}