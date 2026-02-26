/*
 * Problem: Function Overloading 2
 * Description: Overload add(): int+int, double+double, string+string. Show each works.
 * Topic: Functions
 * Date: 2026-02-26 23:42
 */

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

string add(string a, string b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;
    cout << add(2.5, 3.1) << endl;
    cout << add(string("Hello "), string("World")) << endl;
}