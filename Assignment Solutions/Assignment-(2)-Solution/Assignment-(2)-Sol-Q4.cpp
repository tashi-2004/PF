#include <iostream>
using namespace std;
int main()
{
	int q;
	cout << "Enter Number" << endl;
	cin >> q;
	if (q==4)
	{
		cout << "Its a quadrilateral" << endl;
	}
	else
	{
		cout << "Its not a quadrilatoral" << endl;
		cout << "enter again" << endl;
		cin >> q;

	}
	char s;
	{
		cout << "Are all sides equal?" << endl;
		cin >> s;
		if((s=='y') || (s == 'Y'))
		{
			cout << "Sides equal" << endl;
			cout << "Are All angles 90 degree?" << endl;
			cin >> s;
			if((s=='y')||(s=='Y'))
			{
				cout << "I got it. It is a square." << endl;

			}
			else
			{
				cout << "Are opposite angles equal?" << endl;
				cin >> s;
				if ((s == 'y') || (s == 'Y'))
				{
					cout << "I got it. Its a Rhombus" << endl;
				}
				else
				{
					cout << "Its unknown." << endl;

				}
				
			}
		}else
		{
			cout << "4 Sides are not equal" << endl;
			cout << "Are all angles 90 degree?" << endl;
			cin >> s;
			if ((s == 'y') || (s == 'Y'))
			{
				cout << "I got it. Its a rectangle." << endl;
			}
			else
			{
				cout << "Are two sides equal?" << endl;
				cin >> s;
				if((s == 'y') || (s == 'Y'))
				{
					cout << "Are two angles equal?" << endl;
					cin >> s;
					if ((s == 'y') || (s == 'Y'))
					{
						cout << "I got it. Its a kite." << endl;
					}
					else
					{
						cout << "ARE two sides parallel?" << endl;
						cin >> s;
						if ((s == 'y') || (s == 'Y'))
							cout << "I got it. Its a parallelogram." << endl;
						else
							cout << "it is unknown" << endl;

					}


				}
				else
				{
					cout << "Are quadrilateral having pair of parall side?" << endl;
					cin >> s;
					if ((s == 'y') || (s == 'Y'))
					{
						cout << "Is sum of interiror angle 360 degree?" << endl;
						cin >> s;
						if ((s == 'y') || (s == 'Y'))
							cout << "I got it. Its a trapezium." << endl;
						else
							cout << "it is unknown" << endl;
					}
				}
			}

		}

	}

}
