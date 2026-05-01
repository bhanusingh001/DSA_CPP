/*
 * Problem: Valid Palindrome
 * Description: ? Solve ?
 * Topic: Strings
 * Date: 2026-05-01
 */

class Solution {
public:
    bool isPalindrome(string s) {
    
    string clean = "";
    for(char c : s){
            if(isalnum(c))
                clean += tolower(c);
        }
        int i=0;
    int j= clean.size()-1;

    while(i<=j){
        if(clean[i] == clean[j]){
        i++;
        j--;}
        else 
        return false;
    }
    return true;
    }
};