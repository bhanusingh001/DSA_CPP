/*
 * Problem: Eligible to Vote
 * Description: Read age. If >=18 print 'Eligible'. Otherwise print 'Not eligible, X years remaining'.
 * Topic: Conditionals
 * Date: 2026-02-28 22:58
 */

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "Eligible";
    }
    else {
        cout << "Not eligible, " << 18 - age 
             << " years remaining";
    }

    return 0;
}