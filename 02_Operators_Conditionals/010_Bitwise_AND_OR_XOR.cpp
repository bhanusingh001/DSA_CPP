/*
 * Problem: Bitwise AND OR XOR
 * Description: Given a=12, b=10. Print a&b, a|b, a^b, ~a in both decimal and binary.
 * Topic: Operators
 * Date: 2026-02-22 23:44
 */

#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int a=12, b=10;

    cout << "a&b = " << (a&b) << " " << bitset<8>(a&b) << endl;
    cout << "a|b = " << (a|b) << " " << bitset<8>(a|b) << endl;
    cout << "a^b = " << (a^b) << " " << bitset<8>(a^b) << endl;
    cout << "~a  = " << (~a)  << " " << bitset<8>(~a)  << endl;
}