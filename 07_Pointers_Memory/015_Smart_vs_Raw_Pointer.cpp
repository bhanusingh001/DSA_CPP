/*
 * Problem: Smart vs Raw Pointer
 * Description: Compare raw pointer (new/delete) with smart pointer (unique_ptr). Show memory safety.
 * Topic: Dynamic Memory
 * Date: 2026-04-12
 */

#include <iostream>
#include <memory> // Required for unique_ptr

void comparePointers() {
    // --- RAW POINTER ---
    int* raw = new int(10); 
    // If we stop here, 'raw' is leaked. Memory stays "stolen."
    delete raw; // We MUST remember this line.

    // --- SMART POINTER ---
    {
        std::unique_ptr<int> smart = std::make_unique<int>(20);
        // 'smart' works just like a pointer.
        std::cout << *smart << std::endl; 
        
    } // <--- The moment we hit this bracket, 'smart' is deleted automatically!
}

int main() {
    comparePointers();
    return 0;
}