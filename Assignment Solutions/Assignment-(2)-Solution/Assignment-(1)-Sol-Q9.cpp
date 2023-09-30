#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4; int max = 0;
	
	cout << "enter the number"<<endl;
	cin >>num1;

	cout << "enter the number"<<endl;
	cin >> num2;

	cout << "enter the number"<<endl;
	cin >> num3;

	cout << "enter the number"<<endl;
	cin >> num4;

	max = num1> num2 ? (num1 > num3 ? num1: num3) : (num2> num3 ? num2 : num3);
	cout << "maximum of three terms =" << max << endl;
	max= ((num1 > num2 && num1> num3 && num1 > num4) ? num1 : (num2 > num3 && num2 > num4) ? num2 : (num3 > num4) ? num3 : num4);
	cout << "maximum number of four terms=" << max << endl;
	return 0;
}
