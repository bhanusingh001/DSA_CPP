/*
 * Problem: Repeating Number Rows
 * Description: Read N=5. Print: 1\n22\n333\n4444\n55555.
 * Topic: Patterns
 * Date: 2026-03-02 22:29
 */

#include <iostream>
using namespace std;

int main() {
int N = 5;

for(int i = 1; i <= N; i++) 
 {
  for(int j = 1; j <= i; j++)
  cout << i;
  cout << endl;
 }
}