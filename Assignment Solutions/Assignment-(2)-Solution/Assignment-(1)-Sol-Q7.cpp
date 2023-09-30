#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter the number";
	cin >> a;


	string y;
	y = ((a & 1) == 0) ? "Even Number\n" : "Odd Number";
	cout << y << endl;
}
