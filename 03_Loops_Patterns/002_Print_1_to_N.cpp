/*
 * Problem: Print 1 to N
 * Description: Read N. Print all numbers from 1 to N, each on a new line.
 * Topic: For Loop
 * Date: 2026-02-20 01:14
 */

#include <iostream>
using namespace std;
int main(){
    int N; 
    cin >> N;
    for(int i=1;i<=N;i++)
        cout << i << endl;
}