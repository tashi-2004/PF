// Assignment_02_Q_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//QUESTION # 2
//LAIBA MAZHAR
//I22_1855
#include<iostream>
using namespace std;
int main()
{
//Declaring all the variable to store the amount of tax to be calculated.
	int price;
	int sales_tax;
	int income_tax;
	int custom_tax;
	int total_tax;
	//Taking input of the price of an imported phone.
	cout << "Enter the price of imported mobile \n";
	cin >> price;
	//calulating tax according to the price of mobile using if else if.
	if (price >= 0 && price <= 50000)
	{
		custom_tax = price * 2 / 100;
		sales_tax = price * 4 / 100;
		cout << "Custom Duty: " << custom_tax<<endl;
		cout << "Sales Tax: " << custom_tax<<endl;
		cout << "Income Tax: Nill"<<endl;
		total_tax = custom_tax + sales_tax;
		cout << "The total tax payable by FAST on behalf of Employee: " << total_tax;
	}
	else if (price >= 50001 && price <= 70000)
	{
		custom_tax = price * 5 / 100;
		sales_tax = price * 5 / 100;
		cout << "Custom Duty: " << custom_tax << endl;
		cout << "Sales Tax: " << custom_tax << endl;
		cout << "Income Tax: Nill" << endl;
		total_tax = custom_tax + sales_tax;
		cout << "The total tax payable by FAST on behalf of Employee: " << total_tax;
	}
	else if (price >= 70001 && price <= 100000)
	{
		custom_tax = price * 9 / 100;
		sales_tax = price * 6 / 100;
		income_tax = price * 5 / 100;
		cout << "Custom Duty: " << custom_tax << endl;
		cout << "Sales Tax: " << custom_tax << endl;
		cout << "Income Tax: " << income_tax << endl;
		total_tax = custom_tax + sales_tax+income_tax;
		cout << "The total tax payable by FAST on behalf of Employee: " << total_tax;
	}
	else if (price >= 100001 && price <= 150000)
	{
		custom_tax = price * 17 / 100;
		sales_tax = price * 13 / 100;
		income_tax = price * 6 / 100;
		cout << "Custom Duty: " << custom_tax << endl;
		cout << "Sales Tax: " << custom_tax << endl;
		cout << "Income Tax: " << income_tax << endl;
		total_tax = custom_tax + sales_tax + income_tax;
		cout << "The total tax payable by FAST on behalf of Employee:" << total_tax;
	}
	else if (price >= 1500001)
	{
		custom_tax = price * 20 / 100;
		sales_tax = price * 15 / 100;
		income_tax = price * 8 / 100;
		cout << "Custom Duty: " << custom_tax << endl;
		cout << "Sales Tax: " << custom_tax << endl;
		cout << "Income Tax: " << income_tax << endl;
		total_tax = custom_tax + sales_tax + income_tax;
		cout << "The total tax payable by FAST on behalf of Employee: " << total_tax;
	}
	else
		cout << "Invalid Input! \n Enter the price of an imported phone you want to buy: \n ";
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
