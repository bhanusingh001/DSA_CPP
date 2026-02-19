/*
 * Problem: Print Odd Numbers
 * Description: Read N. Print all odd numbers from 1 to N.
 * Topic: For Loop
 * Date: 2026-02-20 02:21
 */

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=1;i<=N;i+=2)
        cout << i << endl;
}