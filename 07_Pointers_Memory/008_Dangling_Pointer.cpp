/*
 * Problem: Dangling Pointer
 * Description: Show what happens when you delete a pointer and try to use it. Fix with setting to nullptr.
 * Topic: Pointers
 * Date: 2026-03-23 12:10
 */

#include <iostream>

int main() {
    // 1. Allocation
    int* myPtr = new int(42); 
    std::cout << "Value before deletion: " << *myPtr << std::endl;
    std::cout << "Address held by pointer: " << myPtr << std::endl;

    // 2. The Danger Zone (Deletion without Nulling)
    delete myPtr; 
    
    // CRITICAL: myPtr is now a 'Dangling Pointer'. 
    // It still holds the address, but the memory is no longer ours.
    std::cout << "\n--- After Deletion ---" << std::endl;
    std::cout << "Address still held (Dangling): " << myPtr << std::endl;
    
    // UNCOMMENTING THE LINE BELOW IS DANGEROUS:
    // std::cout << *myPtr << std::endl; // Undefined Behavior! Might print 42, 0, or CRASH.

    // 3. The Fix: Set to nullptr
    myPtr = nullptr;
    std::cout << "Address after setting to nullptr: " << myPtr << std::endl;

    // 4. Safe Usage Pattern
    if (myPtr != nullptr) {
        std::cout << "Pointer is safe to use: " << *myPtr << std::endl;
    } else {
        std::cout << "Pointer is null. Skipping usage to avoid crash." << std::endl;
    }

    // 5. Double-Delete Protection
    // Deleting a nullptr is safe and does nothing.
    delete myPtr; 
    std::cout << "Attempted to delete nullptr: No crash occurred." << std::endl;

    return 0;
}