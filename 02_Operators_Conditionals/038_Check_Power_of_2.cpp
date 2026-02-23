/*
 * Problem: Check Power of 2
 * Description: Read a positive integer. Check if it is a power of 2 (1,2,4,8,16...).
 * Topic: Conditionals
 * Date: 2026-02-23 23:53
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>0 && (n&(n-1))==0)
        cout<<"Yes";
    else
        cout<<"No";
}