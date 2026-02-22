/*
 * Problem: Switch: Month Name
 * Description: Read 1-12. Print month name using switch-case.
 * Topic: Switch
 * Date: 2026-02-22 23:59
 */

#include <iostream>
using namespace std;

int main(){
    int m;
    cin >> m;

    switch(m){
        case 1: cout<<"January"; break;
        case 2: cout<<"February"; break;
        case 3: cout<<"March"; break;
        case 4: cout<<"April"; break;
        case 5: cout<<"May"; break;
        case 6: cout<<"June"; break;
        case 7: cout<<"July"; break;
        case 8: cout<<"August"; break;
        case 9: cout<<"September"; break;
        case 10: cout<<"October"; break;
        case 11: cout<<"November"; break;
        case 12: cout<<"December"; break;
        default: cout<<"Invalid";
    }
}