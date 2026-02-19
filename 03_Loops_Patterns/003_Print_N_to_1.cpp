/*
 * Problem: Print N to 1
 * Description: Read N. Print all numbers from N down to 1.
 * Topic: For Loop
 * Date: 2026-02-20 01:16
 */

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=N;i>=1;i--)
        cout << i << endl;
}