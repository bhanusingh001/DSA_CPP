/*
 * Problem: Butterfly Pattern
 * Description: Read N. Print butterfly: two right triangles facing each other joined at widest.
 * Topic: Patterns
 * Date: 2026-02-24 23:57
 */

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++) cout<<"*";
        for(int s=1;s<=2*(N-i);s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    for(int i=N;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<"*";
        for(int s=1;s<=2*(N-i);s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}