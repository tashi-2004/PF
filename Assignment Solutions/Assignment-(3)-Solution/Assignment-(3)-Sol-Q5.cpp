#include<iostream>
using namespace std;
int main()
{
	string x; int count = 0; int sub = 0;
	x = "This is a good assignment everyone can do this good assignment siht.";
	string subword = "this";
	int length = x.size(); int count1 = 0; int spe = 0;
	string t; int k = 0;
	for (int i = 0; i < length; i++)
	{
		if (x[i] == 't' || x[i] == 'T')
		{
			t[k] = 't';
			k++;
		}

		if (x[i] == 'h' || x[i] == 'H')
		{
			t[k] = 'h';
			k++;
		}

		if (x[i] == 't' || x[i] == 'T')
		{
			t[k] = 'i';
			k++;
		}

		if (x[i] == 's' || x[i] == 'S')
		{
			t[k] = 's';
			k++;
		}
		if (t == "this")
			sub++;
	}



	for (int i = 0; i < length; i++)
	{
		if (x[i] ==' ')
		{
			count++;
			
		}

		count1++;
		if (x[i] >= 33 && x[i] <= 47)
			spe++;

	}
	cout << "number of the subword" << sub << endl;
	cout << "number of words are" << count+1 << endl;
	cout << "number of character" << count1 << endl;
	cout << "number of the special character" << spe << endl;

}
