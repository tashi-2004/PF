#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter the number to find if its power of 2 or not"<<endl;
	cin >> a;
	
	
	string y;
	y =(( a & 1) == 0) ? "power of two" : "not power of two";
	cout << y << endl;
}
