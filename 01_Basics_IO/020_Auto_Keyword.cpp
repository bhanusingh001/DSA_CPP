/*
 * Problem: Auto Keyword
 * Description: Declare variables with auto for int, double, string, bool. Print their types.
 * Topic: Data Types
 * Date: 2026-02-23 23:46
 */

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    auto a = 10;
    auto b = 3.14;
    auto c = string("hello");
    auto d = true;

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
}