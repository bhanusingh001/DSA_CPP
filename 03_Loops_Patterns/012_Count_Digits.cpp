/*
 * Problem: Count Digits
 * Description: Read a number. Count how many digits it has using a loop.
 * Topic: For Loop
 * Date: 2026-02-21 23:54
 */

#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    if(n == 0)
        cnt = 1;
    else {
        n = abs(n);
        while(n > 0){
            n /= 10;
            cnt++;
        }
    }

    cout << "Digits = " << cnt;
}