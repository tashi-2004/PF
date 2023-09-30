// QUESTION2A_I22-1855.cpp : This file contains the 'main' function. Program execution begins and ends there.
// LAIBA MAZHAR
// I22-1855
//QUESTION 2A
#include<iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	int j;
	cout << "Enter any number: ";
	cin >> n;
	do                       //i=1 j=1
	{
		j = 1;
		do                  // DRY RUN
		{
			cout << "*";
			j++;
		} while (j <= i);
		//for upper left spaces
		j = 1;
		if (i <= n - 1)
		{
			do
			{
				cout << " ";
				j++;
			} while (j <= n - i);

			//for upper right spaces
			j = 1;
			do
			{
				cout << " ";
				j++;
			} while (j <= n - i);
		}
		//UPPER RIGHT TRIANGLE
		j = 1;
		do
		{
			cout << "*";
			j++;

		} while (j <= i);
		i++;
		cout << endl;

	} while (i <= n);
	//lower left triangle
	int k = n - 1, l;
	do
	{
		l = 1;
		do
		{
			cout << "*";
			l++;
		} while (l <= k);
		l = 1;

		do
		{
			cout << " ";
			l++;
		} while (l <= n - k);
		l = 1;
		do
		{
			cout << " ";
			l++;
		} while (l <= n - k);
		l = 1;
		do
		{
			cout << "*";
			l++;
		} while (l <= k);

		cout << endl;
		k--;
	} while (k >= 1);


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
