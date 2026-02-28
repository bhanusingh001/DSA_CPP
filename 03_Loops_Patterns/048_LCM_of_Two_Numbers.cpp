/*
 * Problem: LCM of Two Numbers
 * Description: Read two numbers. Find their LCM using formula: LCM = (a?b) / GCD(a,b).
 * Topic: For Loop
 * Date: 2026-02-28 23:58
 */

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int g = gcd(a, b);

    long long lcm = (1LL * a * b) / g;

    cout << "LCM = " << lcm;

    return 0;
}