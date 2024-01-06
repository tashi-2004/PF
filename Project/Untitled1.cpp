#include <iostream>
#include <cstdlib> // for system("cls") - used to clear the console

using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students

// Function declarations
void enterNewStudent(string names[], int rollNumbers[], float marks[][3], float averages[], int &numStudents);
void displayIndividualStudent(const string names[], const int rollNumbers[], const float marks[][3], const float averages[], int numStudents);
void deleteStudent(string names[], int rollNumbers[], float marks[][3], float averages[], int &numStudents);
void updateStudentRecord(string names[], int rollNumbers[], float marks[][3], float averages[], int numStudents);
void showAllStudents(const string names[], const int rollNumbers[], const float averages[], int numStudents);

int main() {
    string names[MAX_STUDENTS]; // Array to store student names
    int rollNumbers[MAX_STUDENTS]; // Array to store student roll numbers
    float marks[MAX_STUDENTS][3]; // 2D array to store marks for three subjects
    float averages[MAX_STUDENTS]; // Array to store average marks
    int numStudents = 0; // Current number of students
    char choice;

    do {
        system("cls"); // Clear console screen
        cout << "Main Menu\n";
        cout << "1. Enter new student data\n";
        cout << "2. Display individual student information\n";
        cout << "3. Delete student\n";
        cout << "4. Update an individual student record\n";
        cout << "5. Show all students records\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                enterNewStudent(names, rollNumbers, marks, averages, numStudents);
                break;
            case '2':
                displayIndividualStudent(names, rollNumbers, marks, averages, numStudents);
                break;
            case '3':
                deleteStudent(names, rollNumbers, marks, averages, numStudents);
                break;
            case '4':
                updateStudentRecord(names, rollNumbers, marks, averages, numStudents);
                break;
            case '5':
                showAllStudents(names, rollNumbers, averages, numStudents);
                break;
            case '6':
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

        system("pause"); // Pause to view the results
    } while (choice != '6');

    return 0;
}

void enterNewStudent(string names[], int rollNumbers[], float marks[][3], float averages[], int &numStudents) {
    if (numStudents < MAX_STUDENTS) {
        cout << "Enter student name: ";
        cin.ignore(); // Ignore newline character left in the buffer
        getline(cin, names[numStudents]);
        cout << "Enter roll number: ";
        cin >> rollNumbers[numStudents];
        cout << "Enter marks for three subjects:\n";
        for (int i = 0; i < 3; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[numStudents][i];
        }
        // Calculate average marks
        averages[numStudents] = (marks[numStudents][0] + marks[numStudents][1] + marks[numStudents][2]) / 3.0;
        numStudents++;
        cout << "Student data entered successfully.\n";
    } else {
        cout << "Maximum number of students reached. Cannot add more.\n";
    }
}

void displayIndividualStudent(const string names[], const int rollNumbers[], const float marks[][3], const float averages[], int numStudents) {
    int rollNumber;
    cout << "Enter the roll number of the student: ";
    cin >> rollNumber;

    for (int i = 0; i < numStudents; ++i) {
        if (rollNumbers[i] == rollNumber) {
            cout << "Student Information:\n";
            cout << "Name: " << names[i] << "\n";
            cout << "Roll Number: " << rollNumbers[i] << "\n";
            cout << "Marks for three subjects: ";
            for (int j = 0; j < 3; ++j) {
                cout << marks[i][j] << " ";
            }
            cout << "\n";
            cout << "Average Marks: " << averages[i] << "\n";
            return;
        }
    }

    cout << "Student with roll number " << rollNumber << " not found.\n";
}

void deleteStudent(string names[], int rollNumbers[], float marks[][3], float averages[], int &numStudents) {
    int rollNumber;
    cout << "Enter the roll number of the student to delete: ";
    cin >> rollNumber;

    for (int i = 0; i < numStudents; ++i) {
        if (rollNumbers[i] == rollNumber) {
            // Move the last student to the position of the deleted student
            names[i] = names[numStudents - 1];
            rollNumbers[i] = rollNumbers[numStudents - 1];
            for (int j = 0; j < 3; ++j) {
                marks[i][j] = marks[numStudents - 1][j];
            }
            averages[i] = averages[numStudents - 1];
            numStudents--;
            cout << "Student with roll number " << rollNumber << " deleted successfully.\n";
            return;
        }
    }

    cout << "Student with roll number " << rollNumber << " not found.\n";
}

void updateStudentRecord(string names[], int rollNumbers[], float marks[][3], float averages[], int numStudents) {
    int rollNumber;
    cout << "Enter the roll number of the student to update: ";
    cin >> rollNumber;

    for (int i = 0; i < numStudents; ++i) {
        if (rollNumbers[i] == rollNumber) {
            cout << "Enter new marks for three subjects:\n";
            for (int j = 0; j < 3; ++j) {
                cout << "Subject " << j + 1 << ": ";
                cin >> marks[i][j];
            }
            // Recalculate average marks
            averages[i] = (marks[i][0] + marks[i][1] + marks[i][2]) / 3.0;
            cout << "Student record updated successfully.\n";
            return;
        }
    }

    cout << "Student with roll number " << rollNumber << " not found.\n";
}

void showAllStudents(const string names[], const int rollNumbers[], const float averages[], int numStudents) {
    cout << "All Students Records:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Name: " << names[i] << ", ";
        cout << "Roll Number: " << rollNumbers[i] << ", ";
        cout << "Average Marks: " << averages[i] << "\n";
    }
}