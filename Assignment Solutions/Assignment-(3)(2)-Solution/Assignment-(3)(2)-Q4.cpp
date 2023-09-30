// QUESTION4_I22-1855.cpp : This file contains the 'main' function. Program execution begins and ends there.
//LAIBA MAZHAR
//I22-1855
//QUESTION 4


#include<iostream>
using namespace std;
int main()
{
	//DECLARING THE VARIABLES
	float percentage;
	int x;
	float count_on = 0;
	int sensor_grid[4][6];
	//TAKING INPUT OF THE SENSOR DATA
	cout << "ENTER THE SENSOR GRID DATA:\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the values " << i + 1 << " of the sensor";
		for (int j = 0; j < 6; j++)
		{
			cin >> x;
			//INPUT VALIDATION TO ENSURE THE NUMBERS ARE JUST ZEROS AND ONES.
			while (x != 0 && x != 1)
			{
				cout << "You have entered an invalid input. \n Please try puting any of zeros and ones only!";
				cin >> x;
			}
			sensor_grid[i][j] = x;
			//STORING ALL THE INPUT VALUES INTO THE GRID INDICES!
		}
		cout << endl;
	}
	//DISPLAYING THE GRID WITH STORED DATA!
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << sensor_grid[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << "SENSOR GRID: \n";
	cout << endl;
	cout << endl;
	//DISPLAYIG THE GRID WITH SENSORED DATA!
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (sensor_grid[i][j] == 0)
			{
				cout << ". ";
			}
			if (sensor_grid[i][j] == 1)
			{
				cout << "x ";
				count_on++;
			}

		}

		cout << endl;
	}
	//CALCULATING THE PERCENTAGE OF THE SENSORS THAT ARE ON!	
	percentage = (count_on / 24) * 100;
	//DISPLAYING THE CALCULATED PERCENTAGE.
	cout << "The percentage of sensors is: " << percentage << " % .";
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
