/*
 * Problem: Switch: Day Name
 * Description: Read 1-7. Print day name using switch-case. Print 'Invalid' for other numbers.
 * Topic: Switch
 * Date: 2026-02-22 23:58
 */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    switch(n){
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thursday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
        case 7: cout<<"Sunday"; break;
        default: cout<<"Invalid";
    }
}