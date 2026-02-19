/*
 * Problem: Sum of N Numbers
 * Description: Read N. Print sum of 1+2+3+...+N using a for loop.
 * Topic: For Loop
 * Date: 2026-02-20 03:03
 */

#include <iostream>
using namespace std;
int main(){
    int N, sum=0;
    cin >> N;
    for(int i=1;i<=N;i++)
        sum += i;
    cout << sum;
}