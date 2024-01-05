/*
Tashfeen Abbasi
i22-2041
FAST,NUCES
abbasitashfeen7@gmail.com
*/
#include <iostream>
#include<string>
#include<fstream>
using namespace std;
const int max_stu = 100;
//`````````````````````````````````````````````````` Register ```````````````````````````````````````````````
void registration()
{
    cout << endl;
    string tashi_user_name;
    string tashi_pass;
    cout << "Enter a username: ";
    cin >> tashi_user_name;
    ofstream user_file("username.txt");

    cout << endl;
    cout << "Enter a password: ";
    cin >> tashi_pass;
    ofstream pass_file("password.txt");

    if (user_file.is_open() && pass_file.is_open())
    {
        user_file << tashi_user_name << endl;
        pass_file << tashi_pass << endl;
        cout << "\t\t\t\t\tRegistration successfull !" << endl;
        user_file.close();
        pass_file.close();
    }
    else
    {
        cout << "Error opening file for registration." << endl;
    }
}
//````````````````````````````````````````````````` Login ````````````````````````````````````````````````````
bool loginUser()
{
    cout << endl;
    string user_name;
    string pass;
    cout << "Enter your username: ";
    cin >> user_name;
    ifstream usernameFile("username.txt");

    cout << endl;
    cout << "Enter your password: ";
    cin >> pass;
    ifstream passwordFile("password.txt");

    string username;
    string password;

    while (usernameFile >> username && passwordFile >> password)
    {
        if (username == user_name && password == pass)
        {
            cout << "\t\t\t\t\tLogin successfull !" << endl;
            usernameFile.close();
            passwordFile.close();
            return true;
        }
    }
    cout << endl;
    cout << "\t\t\t\t\tInvalid username or password." << endl;
    cout << endl;
    usernameFile.close();
    passwordFile.close();
    return false;
}
//`````````````````````````````````````````````````` New Student ```````````````````````````````````````````````
void new_stu(string names[], int rollNumbers[], float marks[][3], float averages[], int& numStudents)
{
    if (numStudents < max_stu)
    {
        cout << endl;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, names[numStudents]);
        cout << endl;
        cout << "Enter roll number : ";
        cin >> rollNumbers[numStudents];
        cout << endl;
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "\t\t\t\t\tEnter marks for five subjects !" << endl << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[numStudents][i];
            cout << endl;
        }

        averages[numStudents] = (marks[numStudents][0] + marks[numStudents][1] + marks[numStudents][2]) / 3.0;
        numStudents++;
        cout << "\t\t\t\t\tStudent data entered successfully!" << endl;;
    }
    else
    {
        cout << "Maximum number of students reached. Cannot add more." << endl;;
    }
}
//`````````````````````````````````````````````````` Single Student Details  ```````````````````````````````````````````````
void akala_stu(const string names[], const int rollNumbers[], const float marks[][3], const float averages[], int& numStudents)
{
    int tashi_rollNumber;
    cout << endl;
    cout << "Enter the roll number of the student: ";
    cin >> tashi_rollNumber;
    cout << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        if (rollNumbers[i] == tashi_rollNumber)
        {
            cout << "----------------------------------------------------------------------------------------" << endl << endl;
            cout << "\t\t\t\t\t_________________________" << endl;
            cout << "\t\t\t\t\t|  Student Information  |" << endl;
            cout << "\t\t\t\t\t|_______________________|" << endl;
            cout << endl;
            cout << "Name                    : " << names[i] << endl << endl;
            cout << "Roll Number             : " << rollNumbers[i] << endl << endl;
            cout << "\t\t\t\t\tMarks for five subjects !" << endl;
            for (int j = 0; j < 5; ++j)
            {
                cout << "Subject " << i + 1 << "               : " << marks[i][j] << endl << endl;
            }
            cout << "Average Marks           : " << averages[i] << endl << endl;
            return;
        }
    }

    cout << "Student with roll number " << tashi_rollNumber << " not found." << endl << endl;
}
//`````````````````````````````````````````````````` Delete Student ```````````````````````````````````````````````
void del_stu(string naaams[], int roll_no[], float marks[][3], float a[], int& num_stu)
{
    int rollNumber;
    cout << "Enter the roll number of the student to delete: ";
    cin >> rollNumber;

    for (int i = 0; i < num_stu; ++i)
    {
        if (roll_no[i] == rollNumber)
        {
            naaams[i] = naaams[num_stu - 1];
            roll_no[i] = roll_no[num_stu - 1];
            for (int j = 0; j < 3; ++j)
            {
                marks[i][j] = marks[num_stu - 1][j];
            }
            a[i] = a[num_stu - 1];
            num_stu--;
            cout << "Student with roll number " << rollNumber << " deleted successfully.\n";
            return;
        }
    }
    cout << "Student with roll number " << rollNumber << " not found.\n";
}
//`````````````````````````````````````````````````` Update Student ```````````````````````````````````````````````
void update_stu(string n[], int r[], float m[][3], float a[], int curr_stu)
{
    int tashi_roll;
    cout << "Enter the roll number of the student to update: ";
    cin >> tashi_roll;
    cout << endl;
    for (int i = 0; i < curr_stu; ++i)
    {
        if (r[i] == tashi_roll)
        {
            cout << "Enter new marks for three subjects: " << endl;
            for (int j = 0; j < 5; ++j)
            {
                cout << "Subject " << j + 1 << ": ";
                cin >> m[i][j];
            }
            a[i] = (m[i][0] + m[i][1] + m[i][2]) / 3.0;
            cout << "Student record updated successfully." << endl;
            return;
        }
    }

    cout << "Student with roll number " << tashi_roll << " not found." << endl;
}
//`````````````````````````````````````````````````` All Student ```````````````````````````````````````````````
void saaray_stu(const string naam[], const int r[], const float a[], int curr_stu)
{
    cout << "\t\t\t\t\t_____________________________" << endl;
    cout << "\t\t\t\t\t|  All Student Information  |" << endl;
    cout << "\t\t\t\t\t|___________________________|" << endl;
    cout << endl;
    for (int i = 0; i < curr_stu; ++i)
    {
        cout << "----------------------------------------------------------------------------------------" << endl << endl;
        cout << "Name         : " << naam[i] << endl;
        cout << "Roll Number  : " << r[i] << endl;
        cout << "Average Marks: " << a[i] << endl;
        cout << endl;

    }
}
//``````````````````````````````````````````````````````````````````````````````````````````````````````
//`````````````````````````````````````````````````` Main ```````````````````````````````````````````````
//```````````````````````````````````````````````````````````````````````````````````````````````````````
int main()
{
    //Tashfeen Abbasi
    //i22-2041
    //FAST,NUCES
    //abbasitashfeen7@gmail.com
    cout << "\033[38;5;85m";
    string naams[max_stu]; // Array to store student names
    int roll_numbers[max_stu]; // Array to store student roll numbers
    float marks[max_stu][3]; // 2D array to store marks for three subjects
    float average[max_stu]; // Array to store average marks
    int curr_stu = 0; // Current number of students
    char choice;
    bool loggedIn = false;
    do
    {
        system("cls");
        if (!loggedIn)
        {

            cout << "\t\t\t\t\t___________________________________________" << endl;
            cout << "\t\t\t\t\t|  Student Marks Sheet Management System  |" << endl;
            cout << "\t\t\t\t\t|_________________________________________|" << endl;
            cout << endl << endl;
            cout << "____________________________" << endl;
            cout << "|   Select From The List   |" << endl;
            cout << "|__________________________|" << endl;
            cout << "|    1: REGISTER           |" << endl;
            cout << "|__________________________|" << endl;
            cout << "|    2: LOGIN              |" << endl;
            cout << "|__________________________|" << endl;
            cout << "|    3: EXIT               |" << endl;
            cout << "|__________________________|" << endl;
            cout << endl;
        }
        else
        {
            cout << "\t\t\t\t\t______________________________________________________________" << endl;
            cout << "\t\t\t\t\t|  Student Marks Sheet Management System By Tashfeen Abbasi  |" << endl;
            cout << "\t\t\t\t\t|____________________________________________________________|" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\t_____________________" << endl;
            cout << "\t\t\t\t\t\t|       MENU        |" << endl;
            cout << "\t\t\t\t\t\t|___________________|" << endl;
            cout << endl;
        l1:
            cout << "----------------------------------------------------------------------------------------" << endl << endl;
            cout << "___________________________________________________" << endl;
            cout << "|              Select From The List               |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << "|    1: Enter new student data                    |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << "|    2: Display individual student information    |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << "|    3: Delete student                            |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << "|    4: Update an individual student record       |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << "|    5: Show all students records                 |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << "|    6: Logout and Exit                           |" << endl;
            cout << "|_________________________________________________|" << endl;
            cout << endl;
            cout << "Enter your choice: ";
        }
        cin >> choice;
        cout << endl;
        if (!loggedIn)
        {
            switch (choice)
            {
            case '1':
                registration();
                break;
            case '2':
                if (loginUser())
                {
                    loggedIn = true;
                    cout << endl;
                    cout << "\t\t\t\tWelcome to the Student Management System!" << endl;
                }
                break;
            case '3':
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
            }
        }
        else
        {
            switch (choice)
            {
            case '1':
                new_stu(naams, roll_numbers, marks, average, curr_stu);
                break;
            case '2':
                akala_stu(naams, roll_numbers, marks, average, curr_stu);
                break;
            case '3':
                del_stu(naams, roll_numbers, marks, average, curr_stu);
                goto l1;
            case '4':
                update_stu(naams, roll_numbers, marks, average, curr_stu);
                break;
            case '5':
                saaray_stu(naams, roll_numbers, average, curr_stu);
                break;
            case '6':
                loggedIn = false;
                exit(0);
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
            }
        }
        system("pause");
    } while (choice != '3');
    return 0;
}