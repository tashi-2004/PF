#include<iostream>
using namespace std;
int main()
{
	int binary[9]={0}; int count = 0;
	char ch = ' '; int count1;
	for (int i = 0; i < 9; i++)
	{
		cout << "enter the variable whether true or false" << endl;
		cin >> ch;
		if (ch == 'T' || ch == 't')
		{
			binary[i] = 1;
			count = i;
			count1 = count;
			break;
		}
		else
		{
			binary[i] = 0;
		}
	}
	//cout << "count" << count << endl;
	cout << "layer one ::" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << binary[i] << " ";

	}

	cout << "\nlayer 2::" << endl;
	int binary1;
	int j = 0;
	
	while (count > 0) {
		
		        // storing remainder in binary array
		        binary1 = count % 2;
		        count = count / 2;
		        j++;
				cout << binary1 << " ";
		    }

	cout << "\nnumber is equal to::" << endl;
	cout << count1 << endl;







}
