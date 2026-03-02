/*
 * Problem: Binary Triangle
 * Description: Read N. Print triangle with alternating 1s and 0s row by row.
 * Topic: Patterns
 * Date: 2026-03-02 22:30
 */

#include <iostream>
using namespace std;

int main() {
int N = 5;

for(int i = 1; i <= N; i++) {
for(int j = 1; j <= i; j++)
cout << (i % 2);
cout << endl;
}
}