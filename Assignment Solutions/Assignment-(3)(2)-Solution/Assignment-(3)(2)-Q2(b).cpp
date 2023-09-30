// QUESTION2B_I22-1855.cpp : This file contains the 'main' function. Program execution begins and ends there.
//LAIBA MAZHAR
//QUESTION 2B
//I22-1855
#include<iostream>
using namespace std;
int main()
{
	int p = 1;
	int q;
	int n;
	int i = 1;
	int j;
	cout << "Enter any number: ";
	cin >> n;
	do
	{
		q = 1;
		cout << "*";
		if (p < n)
		{

			do
			{
				q++;
				cout << " ";
			} while (q <= n - 2);
		}
		if (p == n)
		{
			q = 1;
			do
			{

				cout << "*";
				q++;
			} while (q <= 2 * n - 1);
			cout << endl;
		}
		if (p <= n - 1)
		{
			cout << "*";
		}
		if (p <= 1)
		{
			q = 1;
			do
			{
				cout << "*";
				q++;
			} while (q < n - 1);

		}
		if (p >= 2 && p <= 4)
		{
			q = 1;
			do
			{
				q++;
				cout << " ";
			} while (q <= n - 1);
		}

		//
		p++;
		cout << endl;
	} while (p <= n);


	p = 1;
	do
	{
		q = 1;

		if (p < n)
		{

			do
			{
				q++;
				cout << " ";
			} while (q <= n - 1);
		}
		if (p == n)
		{
			q = 1;
			do
			{

				cout << "*";
				q++;
			} while (q < n);
			cout << endl;
		}
		if (p <= n - 1)
		{
			cout << "*";
		}


		q = 1;
		if (p < n)
		{

			do
			{
				q++;
				cout << " ";
			} while (q <= n - 2);
		}


		if (p <= n - 1)
		{
			cout << "*";
		}
		p++;
		cout << endl;
	} while (p <= n);

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
