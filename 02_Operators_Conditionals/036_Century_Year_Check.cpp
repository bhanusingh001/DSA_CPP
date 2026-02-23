/*
 * Problem: Century Year Check
 * Description: Read a year. Check if it is a century year (divisible by 100). Print Yes/No.
 * Topic: Conditionals
 * Date: 2026-02-23 23:52
 */

#include <iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    if(year%100==0)
        cout<<"Yes";
    else
        cout<<"No";
}