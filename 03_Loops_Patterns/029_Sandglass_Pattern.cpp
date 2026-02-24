/*
 * Problem: Sandglass Pattern
 * Description: Read N. Print sandglass: inverted pyramid (top) + pyramid (bottom).
 * Topic: Patterns
 * Date: 2026-02-24 23:58
 */

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=N;i>=1;i--){
        for(int s=1;s<=N-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }

    for(int i=2;i<=N;i++){
        for(int s=1;s<=N-i;s++) cout<<" ";
        for(int j=1;j<=2*i-1;j++) cout<<"*";
        cout<<endl;
    }
}