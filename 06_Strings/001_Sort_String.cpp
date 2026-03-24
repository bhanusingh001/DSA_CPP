/*
 * Problem: Sort String
 * Description: Read a string. Sort its characters alphabetically and print.
 * Topic: Strings
 * Date: 2026-03-24 23:48
 */

#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string text;

    std::cout << "Enter a string: ";
    std::cin >> text;

    // std::sort rearranges the characters in place
    // text.begin() and text.end() provide the range to sort
    std::sort(text.begin(), text.end());

    std::cout << "Sorted string: " << text << std::endl;

    return 0;
}