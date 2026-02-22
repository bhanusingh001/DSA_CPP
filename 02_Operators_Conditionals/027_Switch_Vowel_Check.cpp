/*
 * Problem: Switch: Vowel Check
 * Description: Read a character. Check vowel/consonant using switch-case (handle both upper and lowercase).
 * Topic: Switch
 * Date: 2026-02-22 23:59
 */

#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";
    }
}