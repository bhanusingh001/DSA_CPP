/*
 * Problem: While: Sum till 0
 * Description: Keep reading integers until user enters 0. Print total sum of all entered numbers.
 * Topic: While Loop
 * Date: 2026-02-21 22:53
 */

#include <iostream>
using namespace std;

int main() {
    int sum=0,n; 
    do{cin>>n;sum+=n;}
    while(n!=0); 
    cout << "Sum = " << sum;
}