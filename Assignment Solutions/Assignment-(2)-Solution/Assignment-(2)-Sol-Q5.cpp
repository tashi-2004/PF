#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cout << " enter password" << endl;
	getline(cin, a);
	int length; int count = 0; int index = 0;
	length = a.size();
	if (length < 6)
	{
		cout << "invalid password" << endl;
		cout << "enter again as length is short" << endl;
		getline(cin, a);
		int length; int count = 0;
		length = a.size();
			if (((a) >= "A") && (a <= "Z"))
			count++;

		if ((a[1] >= 'A') && (a[1] <= 'Z'))

			count++;
		if ((a[2] >= 'A') && (a[2] <= 'Z'))
			count++;
		if ((a[3] >= 'A') && (a[3] <= 'Z'))
			count++;
		if ((a[4] >= 'A') && (a[4] <= 'Z'))
			count++;
		if ((a[5] >= 'A') && (a[5] <= 'Z'))
			count++;
		if ((a[6] >= 'A') && (a[6] <= 'Z'))
			count++;
		if ((a[7] >= 'A') && (a[7] <= 'Z'))
			count++;
		if ((a[8] >= 'A') && (a[8] <= 'Z'))
			count++;
		
		if (count > 0)
			cout << "valid as it has uppercase letters"<<endl;
		else
		{
			cout << "invalid" << endl;
			cout << "enter again as capital letter is missing" << endl;
			getline(cin, a);
		}
		if ((a >= "a") && (a <= "z"))
			index++;
		if ((a[1] >= 'a') && (a[1] <= 'z'))
			index++;
		if ((a[2] >= 'a') && (a[2] <= 'z'))
			index++;
		
		if ((a[3] >= 'a') && (a[3] <= 'z'))
			index++;
		if ((a[4] >= 'a') && (a[4] <= 'z'))
			index++;
		if ((a[5] >= 'a') && (a[5] <= 'z'))
			index++;
		if ((a[6] >= 'a') && (a[6] <= 'z'))
			index++;
		if ((a[7] >= 'a') && (a[7] <= 'z'))
			index++;
		if ((a[8] >= 'a') && (a[8] <= 'z'))
			index++;
		if (index > 0)
			cout << "valid as it has lowercase letters" << endl;
		else
		{
			cout << "invalid" << endl;
			cout << "enter again as small letter is missing" << endl;
			getline(cin, a);
		}
		int num = 0;
		if ((a >= "1") && (a <= "9"))
			num++;

		if ((a[1] >= '1') && (a[1] <= '9'))
			num++;

		if ((a[2] >= '1') && (a[2] <= '9'))
			num++;

		if ((a[3] >= '1') && (a[3] <= '9'))
				num++;
		if ((a[4] >= '1') && (a[4] <= '9'))
			num++;
		if ((a[5] >= '1') && (a[5] <= '9'))
			num++;
		if ((a[6] >= '1') && (a[6] <= '9'))
			num++;
		if ((a[7] >= '1') && (a[7] <= '9'))
			num++;
		if ((a[8] >= '1') && (a[8] <= '9'))
			num++;
		if (num > 0)
			cout << "valid as it has digit" << endl;
		else
		{
			cout << "invalid" << endl;
			cout << "enter again digitis missing:"<< endl;
			getline(cin, a);
		}

	}
	
	else
	{
		// uppercase, lowercase;
		
		if (((a) >= "A") && (a <= "Z"))
			count++;

		if ((a[1] >= 'A') && (a[1] <= 'Z'))

			count++;
		if ((a[2] >= 'A') && (a[2] <= 'Z'))
			count++;
		if ((a[3] >= 'A') && (a[3] <= 'Z'))
			count++;
		if ((a[4] >= 'A') && (a[4] <= 'Z'))
			count++;
		if ((a[5] >= 'A') && (a[5] <= 'Z'))
			count++;
		if ((a[6] >= 'A') && (a[6] <= 'Z'))
			count++;
		if ((a[7] >= 'A') && (a[7] <= 'Z'))
			count++;
		if ((a[8] >= 'A') && (a[8] <= 'Z'))
			count++;
		
		if (count > 0)
			cout << "valid as it has uppercase letters"<<endl;
		else
		{
			cout << "invalid" << endl;
			cout << "enter again as capital letter is missing" << endl;
			getline(cin, a);
		}
		if ((a >= "a") && (a <= "z"))
			index++;
		if ((a[1] >= 'a') && (a[1] <= 'z'))
			index++;
		if ((a[2] >= 'a') && (a[2] <= 'z'))
			index++;
		
		if ((a[3] >= 'a') && (a[3] <= 'z'))
			index++;
		if ((a[4] >= 'a') && (a[4] <= 'z'))
			index++;
		if ((a[5] >= 'a') && (a[5] <= 'z'))
			index++;
		if ((a[6] >= 'a') && (a[6] <= 'z'))
			index++;
		if ((a[7] >= 'a') && (a[7] <= 'z'))
			index++;
		if ((a[8] >= 'a') && (a[8] <= 'z'))
			index++;
		if (index > 0)
			cout << "valid as it has lowercase letters" << endl;
		else
		{
			cout << "invalid" << endl;
			cout << "enter again as small letter is missing" << endl;
			getline(cin, a);
		}
		int num = 0;
		if ((a >= "1") && (a <= "9"))
			num++;

		if ((a[1] >= '1') && (a[1] <= '9'))
			num++;

		if ((a[2] >= '1') && (a[2] <= '9'))
			num++;

		if ((a[3] >= '1') && (a[3] <= '9'))
				num++;
		if ((a[4] >= '1') && (a[4] <= '9'))
			num++;
		if ((a[5] >= '1') && (a[5] <= '9'))
			num++;
		if ((a[6] >= '1') && (a[6] <= '9'))
			num++;
		if ((a[7] >= '1') && (a[7] <= '9'))
			num++;
		if ((a[8] >= '1') && (a[8] <= '9'))
			num++;
		if (num > 0)
			cout << "valid as it has digit" << endl;
		else
		{
			cout << "invalid" << endl;
			cout << "enter again digitis missing:"<< endl;
			getline(cin, a);
		}



	}
	return 0;


}
