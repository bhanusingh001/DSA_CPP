/*
 * Problem: Profit or Loss
 * Description: Read cost price and selling price. Print Profit/Loss amount or 'No Profit No Loss'.
 * Topic: Conditionals
 * Date: 2026-02-23 23:52
 */

#include <iostream>
using namespace std;

int main(){
    double cp,sp;
    cin>>cp>>sp;

    if(sp>cp) cout<<"Profit "<<sp-cp;
    else if(cp>sp) cout<<"Loss "<<cp-sp;
    else cout<<"No Profit No Loss";
}