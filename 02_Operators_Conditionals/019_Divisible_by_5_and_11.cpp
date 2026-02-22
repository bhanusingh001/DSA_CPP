/*
 * Problem: Divisible by 5 and 11
 * Description: Read a number. Check if divisible by both 5 AND 11. Print Yes/No.
 * Topic: Conditionals
 * Date: 2026-02-22 23:56
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%5==0 && n%11==0)
        cout << "Yes";
    else
        cout << "No";
}