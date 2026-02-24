/*
 * Problem: Reverse Alphabet Triangle
 * Description: Read N. Print: ABCD\nABC\nAB\nA.
 * Topic: Patterns
 * Date: 2026-02-24 23:59
 */

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=N;i>=1;i--){
        for(char ch='A'; ch<'A'+i; ch++)
            cout<<ch;
        cout<<endl;
    }
}