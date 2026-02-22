/*
 * Problem: Left & Right Shift
 * Description: Multiply a number by 2 using <<. Divide by 2 using >>. Print original and results.
 * Topic: Operators
 * Date: 2026-02-22 23:45
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "Original: " << n << endl;
    cout << "Multiply by 2: " << (n<<1) << endl;
    cout << "Divide by 2: " << (n>>1) << endl;
}