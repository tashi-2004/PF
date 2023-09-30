#include<iostream>
using namespace std;
 int main()
 {
	 int NW, CB, F;
	 cout << "Enter total number of wheels" << endl;
	 cin >> NW;
	 cout << "Enter total number of Car bodies" << endl;
	 cin >> CB;
	 cout << "Enter Figures of people" << endl;
	 cin >> F;
	 int x = (NW / 4);
	 int y = (F / 2);
	 int min;
	 if (x< CB&& x < y)

	 {
		
		 cout << "No of cars:" <<x<< endl;
	  }
	 if (CB < x && CB < y)
	 {
		 cout << "No of cars:" << CB << endl;
	 }
	 if (y < CB && y <x)
	 {
		 cout << "No of cars:" << y;

	 }
		 



  }
