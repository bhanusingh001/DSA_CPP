/*
 * Problem: Factorial
 * Description: Read N. Calculate and print N! (N factorial) using a for loop.
 * Topic: For Loop
 * Date: 2026-02-20 03:12
 */

#include <iostream>
using namespace std;
int main(){
    int N;
    long long fact=1;
    cin >> N;
    for(int i=1;i<=N;i++)
        fact *= i;
    cout << fact;
}