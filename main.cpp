// Christian Jay Mandani BSIT 1-1
#include <iostream>

using namespace std;

int main() {

    //  Declared variables
    float physics, chemistry, biology, mathematics, computer, total_marks, percentage = 0.0;
    char grade = ' ';

    // Input marks for each subject
    cout << "Enter the marks for Physics: ";
    cin >> physics;

    cout << endl;

    cout << "Enter the marks for Chemistry: ";
    cin >> chemistry;

    cout << endl;

    cout << "Enter the marks for Biology: ";
    cin >> biology;

    cout << endl;

    cout << "Enter the marks for Mathematics: ";
    cin >> mathematics;

    cout << endl;

    cout << "Enter the marks for Computer: ";
    cin >> computer;

    cout << endl;

    // Calculate total marks and percentage
    total_marks = physics + chemistry + biology + mathematics + computer;
    percentage = total_marks / 5;

    // Determine the grade

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else if (percentage >= 40) {
        grade = 'E';
    }
    else if ( percentage < 40) {
        grade = 'F';
    }
    else {
        cout << "Invalid!" << endl;
    }

    // Output the results
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade;
    
    cout << endl;

    return 0;
}