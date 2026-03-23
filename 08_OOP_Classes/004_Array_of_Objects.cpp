/*
 * Problem: Array of Objects
 * Description: Create class Employee. Create array of 5 Employee objects. Input and display all.
 * Topic: OOP-Class
 * Date: 2026-03-23 23:52
 */

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;

public:
    // Method to take input from the user
    void inputData() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // Clear the newline buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Method to display the stored data
    void displayData() const {
        cout << "ID: " << id << " | Name: " << name << " | Salary: $" << salary << endl;
    }
};

int main() {
    const int SIZE = 5;
    Employee employees[SIZE];

    // Input loop
    cout << "--- Enter details for " << SIZE << " employees ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        employees[i].inputData();
    }

    // Output loop
    cout << "\n--- Displaying Employee Records ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        employees[i].displayData();
    }

    return 0;
}