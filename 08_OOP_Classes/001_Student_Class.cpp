/*
 * Problem: Student Class
 * Description: Create class Student with name and marks[5]. Implement avg() and grade() methods.
 * Topic: OOP-Class
 * Date: 2026-02-27 23:52
 */

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks[5];

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter 5 marks: ";
        for(int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    double avg() {
        int sum = 0;
        for(int i = 0; i < 5; i++)
            sum += marks[i];
        return sum / 5.0;
    }

    char grade() {
        double a = avg();

        if(a >= 90) return 'A';
        else if(a >= 75) return 'B';
        else if(a >= 60) return 'C';
        else if(a >= 40) return 'D';
        else return 'F';
    }

    void display() {
        cout << "Average: " << avg() << endl;
        cout << "Grade: " << grade() << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}