/*
 * Problem: Integer vs Float Division
 * Description: Print the result of 7/2, 7.0/2, and (float)7/2. Explain each.
 * Topic: Operators
 * Date: 2026-02-22 23:31
 */

#include <iostream>
using namespace std;

int main(){
    cout << 7/2 << endl;
    cout << 7.0/2 << " (gives float answer as float/int = float)"<< endl;
    cout << (float)7/2 << " (explicit casting)"<< endl;
    cout << (int)7.0/2 << " (explicit cast to int)"<< endl;
}