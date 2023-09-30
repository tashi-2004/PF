#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "enter a lowecase letter" << endl;
	cin >> a;
	if ((a >= 97) && (a <= 127))
	{
		cout << "Its a Lowercase letter" << endl;
	}
	else
	{
		cout << "It is not a lowercase letter" << endl;

	}
	char b;
	cout << "enter a special character" << endl;
	cin >> b;
	if ((b == 9) || (b == 10) || (b == 13) || ((b >= 32) && (b <= 64)) || ((b >= 91) && (b <= 96)) || ((b >= 123) && (b <= 126)))
	{
		cout << "Its a special character" << endl;

	}
	else
	{
		cout << "Its not a special character" << endl;


     }
	int c;
	cout << "enter a year to check if its leap year or not" << endl;
	cin >>c;
	
	if ((c % 4 == 0) || (c % 400 == 0))
	{
		cout << "Its a leap year" << endl;

	}
	else
	{
		cout << "Its not a leap year \n";
	}

}
