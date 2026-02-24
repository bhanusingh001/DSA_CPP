/*
 * Problem: Number Pyramid
 * Description: Read N. Print centered number pyramid: 1, 121, 12321, 1234321.
 * Topic: Patterns
 * Date: 2026-02-24 23:56
 */

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        for(int s=1;s<=N-i;s++)
            cout<<" ";

        for(int j=1;j<=i;j++)
            cout<<j;

        for(int j=i-1;j>=1;j--)
            cout<<j;

        cout<<endl;
    }
}