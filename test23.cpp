#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {  // Outer `if`
        cout << "Enter your gender (M/F): ";
        cin >> gender;

        if (gender == 'M' || gender == 'm') {  // Nested `if`
            cout << "You are an adult male." << endl;
        } else if (gender == 'F' || gender == 'f') {  // Nested `else if`
            cout << "You are an adult female." << endl;
        } else {  // Nested `else`
            cout << "Invalid gender input." << endl;
        }

    } else {  // Outer `else`
        cout << "You are a minor." << endl;
    }

    return 0;
}
