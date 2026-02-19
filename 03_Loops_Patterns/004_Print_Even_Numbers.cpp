/*
 * Problem: Print Even Numbers
 * Description: Read N. Print all even numbers from 1 to N.
 * Topic: For Loop
 * Date: 2026-02-20 01:23
 */

#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=2;i<=N;i+=2)
        cout << i << endl;
}