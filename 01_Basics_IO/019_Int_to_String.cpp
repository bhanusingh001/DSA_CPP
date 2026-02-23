/*
 * Problem: Int to String
 * Description: Convert integer 12345 to string. Concatenate it with "The answer is: ".
 * Topic: Data Types
 * Date: 2026-02-23 23:45
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 12345;
    string result = "The answer is: " + to_string(n);
    cout << result;
}