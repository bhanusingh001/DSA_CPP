/*
 * Problem: Void Pointer
 * Description: Declare void* vp. Assign int, float, char pointers to it. Cast back to use: *(int*)vp.
 * Topic: Pointers
 * Date: 2026-04-11 23:34
 */

#include <iostream>

int main() {
    void* vp;
    int i = 5;
    float f = 3.14f;
    char c = 'A';

    vp = &i;
    std::cout << "Int: " << *(int*)vp << std::endl;

    vp = &f;
    std::cout << "Float: " << *(float*)vp << std::endl;

    vp = &c;
    std::cout << "Char: " << *(char*)vp << std::endl;

    return 0;
}