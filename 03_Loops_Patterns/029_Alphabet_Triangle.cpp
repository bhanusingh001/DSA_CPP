/*
 * Problem: Alphabet Triangle
 * Description: Read N. Print: A\nAB\nABC\nABCD...
 * Topic: Patterns
 * Date: 2026-02-24 23:58
 */

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        for(char ch='A'; ch<'A'+i; ch++)
            cout<<ch;
        cout<<endl;
    }
}