/*
 * Problem: String to Int
 * Description: Convert the string "12345" to an integer using stoi(). Handle invalid input with try-catch.
 * Topic: Data Types
 * Date: 2026-02-23 23:44
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    try{
        int n = stoi(s);
        cout << n;
    }
    catch(...){
        cout << "Invalid input";
    }
}