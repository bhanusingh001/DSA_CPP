/*
 * Problem: Column Number Pattern
 * Description: Read N=5. Print: 1\n12\n123\n1234\n12345.
 * Topic: Patterns
 * Date: 2026-03-02 22:28
 */

#include <iostream>
using namespace std;

int main() {
int N = 5;

for(int i = 1; i <= N; i++) 
 {
  for(int j = 1; j <= i; j++)
  cout << j;
  cout << endl;
 }
}