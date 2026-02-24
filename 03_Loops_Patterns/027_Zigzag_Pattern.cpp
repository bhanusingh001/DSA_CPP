/*
 * Problem: Zigzag Pattern
 * Description: Read N. Print zigzag wave pattern with stars across N rows.
 * Topic: Patterns
 * Date: 2026-02-24 23:57
 */

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int row=0; row<3; row++){
        for(int col=0; col<N; col++){
            if((row+col)%4==0 || (row==1 && col%2==0))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}