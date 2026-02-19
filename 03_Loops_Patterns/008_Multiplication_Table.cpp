/*
 * Problem: Multiplication Table
 * Description: Read N. Print multiplication table: N?1=N, N?2=2N, ... N?10.
 * Topic: For Loop
 * Date: 2026-02-20 03:13
 */

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=1;i<=10;i++)
        cout << N << " x " << i << " = " << N*i << endl;
}