/*
 * Problem: Temperature Converter
 * Description: Write celsiusToFahr(c) and fahrToCelsius(f). Test with 0?C, 100?C, 32?F, 212?F.
 * Topic: Functions
 * Date: 2026-02-26 23:43
 */

#include <iostream>
using namespace std;

double celsiusToFahr(double c) {
    return (c * 9/5) + 32;
}

double fahrToCelsius(double f) {
    return (f - 32) * 5/9;
}

int main() {
    cout << "0?C = " << celsiusToFahr(0) << "?F" << endl;
    cout << "100?C = " << celsiusToFahr(100) << "?F" << endl;
    cout << "32?F = " << fahrToCelsius(32) << "?C" << endl;
    cout << "212?F = " << fahrToCelsius(212) << "?C" << endl;
}