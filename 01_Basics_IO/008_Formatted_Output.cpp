/*
 * Problem: Formatted Output
 * Description: ? Solve ?
 * Topic: I/O
 * Date: 2026-02-19 23:50
 */

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout << left << hex << showbase << nouppercase << (long)A<< endl;

        cout << setw(0xf) << right << setfill('_') << showpos << setprecision(2) << fixed << B << endl;

        cout << scientific << uppercase << setprecision(9) << noshowpos << C << endl;

	}
	return 0;

}