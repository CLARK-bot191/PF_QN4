#include <iostream>
using namespace std;

int main() {
    int grade; 

    // Input validation loop
    do {
        // Prompting the user to enter a grade between 0 and 100
        cout << "Enter the grade (0-100): ";
        cin >> grade;

        // Checking if the grade is out of range
        if (grade < 0 || grade > 100) {
            cout << "Invalid grade! Please enter a number between 0 and 100." << endl;
        }

    } while (grade < 0 || grade > 100);  // Repeating until a valid grade is entered

    
    cout << "Valid grade entered: " << grade << endl;

    return 0;
}
