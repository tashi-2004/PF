// Assignment_PF_02_Q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main()
{
	//Declaring variables
	int ID;
	int password;
    int enter_password;
	string role;
	//Taking id as input from the user
	cout << "Enter your ID: \n";
	cin >> ID;
	//Storing separate password for each IDs
    switch (ID)
    {
    case 100:
        password = 10220;
        break;
    case 101:
        password = 16010;
        break;
    case 102:
        password = 11002;
        break;
    case 103:
        password = 22342;
        break;
    case 104:
        password = 44323;
        break;
    case 105:
        password = 33354;
        break;
    case 106:
        password = 87685;
        break;
    case 107:
        password = 99089;
        break;
    case 108:
        password = 34562;
        break;
    case 109:
        password = 44255;
        break;
    case 110:
        password = 32415;
        break;
    case 111:
        password = 90784;
        break;
    case 112:
        password = 78685;
        break;
    case 113:
        password = 44255;
        break;
    case 114:
        password = 81973;
        break;
    default:
        password = 0;
        break;
    }
    // Matching passwords for each id using switch again
    switch (ID)
    {
    case 100:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        	//displaying an appropiate message respectively using nested switch!
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    
    case 101:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch (enter_password == password)
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;

    case 102:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    case 103:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    case 104:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
    case 105:
        role = " student ";
        cout << "Dear" << role << "please enter your password: " << endl;
        cin >> enter_password;
        switch ((enter_password == password))
        {
        case 1:
            cout << "Congrats" << role << "! you have entered a correct password\n";
            break;
        default:
            cout << "You have entered an incorrect value.\n";
            break;
        }
        break;
        case 106:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 107:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }

            break;
        case 108:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 109:
            role = " student ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 110:

            role = " teacher ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 111:
            role = " teacher ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 112:
            role = " teacher ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 113:
            role = " IT Staff ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
            break;
        case 114:
            role = " IT Staff ";
            cout << "Dear" << role << "please enter your password: " << endl;
            cin >> enter_password;
            switch ((enter_password == password))
            {
            case 1:
                cout << "Congrats" << role << "! you have entered a correct password\n";
                break;
            default:
                cout << "You have entered an incorrect value.\n";
                break;
            }
       break;
       // Displaying an appropriate message if the entered ID is incorrect!
       default:
       cout << "Incorrect ID";
       break;
     
    }

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
