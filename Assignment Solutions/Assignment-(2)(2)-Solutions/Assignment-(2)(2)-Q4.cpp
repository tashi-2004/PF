// ASSIGNMENT_PF_02_Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//QUESTION # 4
//LAIBA MAZHAR
//ROLL NO:I22_1855
#include<iostream>
using namespace std;
int main()
{
	//INPUTS
	char safety;
	char  hazards;
	char patients_moved_safely;
	char stability;
	cout << "scene assessment\n";
	cout<<"Is the scene safe?(Y or N)";
	cin >> safety;
	if (safety == 'n' || safety == 'N')
	{
		cout << "***Eliminating hazards***\n\n";
		cout << "\nIs hazard Eliminated?(Y or N)";
		cin >> hazards;
		if (hazards == 'N' || hazards == 'n')
		{
			cout << "***Remove Patient From Hazards***\n";
			
			cout << "\n\nIs the Patient moved Safely?( Y or N )";
			cin>> patients_moved_safely;
			if (patients_moved_safely == 'n' || patients_moved_safely == 'N')
			{
				cout << "Call for and await backup to make the scene safe.\n";
				cout << "***assessing the patient***\n";
				cout << "***conducting primary survey***\n";
				cout << "***providing critical intervention***\n";
			}
			else if (patients_moved_safely == 'y' || patients_moved_safely == 'Y')
			{
				cout << "***assessing the patient***\n";
				cout << "***conducting primary survey***\n";
				cout << "***providing critical intervention***\n";
				cout << "\n";
			}
			else
			{
				cout << "Invalid Input";
			}
		}
		else if (hazards == 'y' || hazards == 'Y')
		{
				cout << "***assessing the patient***\n";
				cout << "***conducting primary survey***\n";
				cout << "***providing critical intervention***\n";
		}
		else
		{
			cout << "Invalid Input";
		}
	}
	else if (safety == 'y' || safety == 'Y') 
	{
	            cout << "***assessing the patient***\n";
				cout << "***conducting primary survey***\n";
				cout << "***providing critical intervention***\n";
	}
	else
	{
		cout << "Invalid Input";
	}
	cout<<"\n\nIs the patient stable now?( Y or N )";
	cin>>stability;
	if(stability=='y'|| stability=='Y')
	{
		cout<<"***take patient history***\n"; 
        cout<<"***Pulling insurance details***\n" ;
        cout<<"***transport***\n";
		cout<<"***checking vitals***\n";
        cout<<"***reassessing patient's condition***\n";
        cout<<"***treating***\n"; 
	}
	else if(stability=='n'|| stability=='N')
	{
		cout<<"***take patient history***\n"; 
        cout<<"***Pulling insurance details***\n"; 
        cout<<"***transport***\n";
		cout<<"***checking vitals***\n";
        cout<<"***reassessing patient's condition***\n";
        cout<<"***treating***\n"; 
       
	}
    else{
    	cout<<"Invalid Input!";
	}
	cout<<"***handing patient over to higher level of care***\n";
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
