/*
 * Problem: Static Variable
 * Description: Write a function with static int count=0; count++. Call it 5 times, print count each time.
 * Topic: Functions
 * Date: 2026-03-31 23:32
 */

#include <iostream>

void counterFunction() {
    // Initialized only once when the program starts
    static int count = 0; 
    
    count++;
    std::cout << "Current count: " << count << std::endl;
}

int main() {
    // Calling the function 5 times
    for (int i = 0; i < 5; i++) {
        counterFunction();
    }

    return 0;
}