// QUESTION_1_i22-1855.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//QUESTION # 1
// LAIBA MAZHAR
//ROLL NO: I22-1855


#include<iostream>
using namespace std;
int main()
{
	//VARIABLES
	char pack;
	float data_used = 0;
	float off_net_minutes = 0;
	float on_net_minutes = 0;
	float mbs = 0;
	float additional_mbs = 0;
	float over_charges = 0;
	float data_bill = 0;
	float off_net_bill = 0;
	float on_net_bill = 0;
	float off_net_additional = 0;
	float on_net_additional = 0;
	float total_amount_due = 0;
	float total_amount_due2 = 0;
    // TAKING INPUTS	
	cout << "How many GBs data have you used ? \n";
	cout << "Enter: ";
	cin >> data_used;
	cout << "How many call (OFF-NET) minutes have you used ?\n";
	cout << "Enter: ";
	cin >> off_net_minutes;
	cout << "How many call (ON-NET) minutes have you used ?\n";
	cout << "Enter: ";
	cin >> on_net_minutes;
	cout << "Which pack have you subscribed ?\n-> A \n-> B \n-> C \n-> D \n";
	cout << "Enter: ";
	// MAINTAINING COST FOR THE GIVEN PACK!
	cin >> pack;
	switch (pack)
	{
	case 'A':case'a':

		if (data_used > 1)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 1024);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 20;
		}
		if (off_net_minutes > 100)
		{
			off_net_additional = off_net_minutes - 100;
			off_net_bill = off_net_additional * 3.75;
		}
		if (on_net_minutes > 200)
		{
			on_net_additional = on_net_minutes - 200;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due = on_net_bill + off_net_bill + data_bill + 100 + 500;
		cout << "Your total amount due is: Rs" << total_amount_due << "\\-\n";


		cout << "Saving From Other Packages:\n";
		if (data_used > 5)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 5120);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 15;
		}
		if (off_net_minutes > 250)
		{
			off_net_additional = off_net_minutes - 250;
			off_net_bill = off_net_additional * 3.25;
		}
		if (on_net_minutes > 350)
		{
			on_net_additional = on_net_minutes - 350;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 800 + 350;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package B would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package B\n";

		if (data_used > 7)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 7168);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 13;
		}
		if (off_net_minutes > 350)
		{
			off_net_additional = off_net_minutes - 350;
			off_net_bill = off_net_additional * 2.75;
		}
		if (on_net_minutes > 300)
		{
			on_net_additional = on_net_minutes - 300;
			on_net_bill = on_net_additional * 1.75;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 1000 + 500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package C would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package C\n";

		if (data_used > 50)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 51200);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 10;
		}
		if (off_net_minutes > 750)
		{
			off_net_additional = off_net_minutes - 750;
			off_net_bill = off_net_additional * 1.50;
		}
		if (on_net_minutes > 1000)
		{
			on_net_additional = on_net_minutes - 1000;
			on_net_bill = on_net_additional;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 1000 + 1500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package D would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package D\n";
		break;

	case 'B':case'b':
	{
		if (data_used > 5)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 5120);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 15;
		}
		if (off_net_minutes > 250)
		{
			off_net_additional = off_net_minutes - 250;
			off_net_bill = off_net_additional * 3.25;
		}
		if (on_net_minutes > 350)
		{
			on_net_additional = on_net_minutes - 350;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due = on_net_bill + off_net_bill + data_bill + 800 + 350;
		cout << "Your total amount due is: Rs " << total_amount_due << "\\-\n";
		//-------------------------------------------------------------//
		cout << "\n------------------------------------------------------------------------\n";
		cout << "Saving From Other Packages:\n";
		if (data_used > 1)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 1024);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 20;
		}
		if (off_net_minutes > 100)
		{
			off_net_additional = off_net_minutes - 100;
			off_net_bill = off_net_additional * 3.75;
		}
		if (on_net_minutes > 200)
		{
			on_net_additional = on_net_minutes - 200;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 100 + 500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package A would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package A\n";
		//-------------------------------------------------------------//
		if (data_used > 7)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 7168);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 13;
		}
		if (off_net_minutes > 350)
		{
			off_net_additional = off_net_minutes - 350;
			off_net_bill = off_net_additional * 2.75;
		}
		if (on_net_minutes > 300)
		{
			on_net_additional = on_net_minutes - 300;
			on_net_bill = on_net_additional * 1.75;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 1000 + 500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package C would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package C\n";
		//-------------------------------------------------------------//
		if (data_used > 50)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 51200);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 10;
		}
		if (off_net_minutes > 750)
		{
			off_net_additional = off_net_minutes - 750;
			off_net_bill = off_net_additional * 1.50;
		}
		if (on_net_minutes > 1000)
		{
			on_net_additional = on_net_minutes - 1000;
			on_net_bill = on_net_additional;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 1000 + 1500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package D would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package D\n";
		break;
	}
	case 'C':case'c':
	{
		if (data_used > 7)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 7168);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 13;
		}
		if (off_net_minutes > 350)
		{
			off_net_additional = off_net_minutes - 350;
			off_net_bill = off_net_additional * 2.75;
		}
		if (on_net_minutes > 300)
		{
			on_net_additional = on_net_minutes - 300;
			on_net_bill = on_net_additional * 1.75;
		}
		total_amount_due = on_net_bill + off_net_bill + data_bill + 1000 + 500;
		cout << "Your total amount due is: Rs" << total_amount_due << "\\-\n";
		//-------------------------------------------------------------//
		cout << "\n------------------------------------------------------------------------\n";
		cout << "Saving From Other Packages:\n";
		if (data_used > 1)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 1024);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 20;
		}
		if (off_net_minutes > 100)
		{
			off_net_additional = off_net_minutes - 100;
			off_net_bill = off_net_additional * 3.75;
		}
		if (on_net_minutes > 200)
		{
			on_net_additional = on_net_minutes - 200;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 100 + 500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package A would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package A\n";
		//-------------------------------------------------------------//
		if (data_used > 5)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 5120);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 15;
		}
		if (off_net_minutes > 250)
		{
			off_net_additional = off_net_minutes - 250;
			off_net_bill = off_net_additional * 3.25;
		}
		if (on_net_minutes > 350)
		{
			on_net_additional = on_net_minutes - 350;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 800 + 350;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package B would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package B\n";
		//-------------------------------------------------------------//
		if (data_used > 50)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 51200);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 10;
		}
		if (off_net_minutes > 750)
		{
			off_net_additional = off_net_minutes - 750;
			off_net_bill = off_net_additional * 1.50;
		}
		if (on_net_minutes > 1000)
		{
			on_net_additional = on_net_minutes - 1000;
			on_net_bill = on_net_additional;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 1000 + 1500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package D would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package D\n";
		break;
	}
	case 'D':case'd':
	{
		if (data_used > 50)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 51200);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 10;
		}
		if (off_net_minutes > 750)
		{
			off_net_additional = off_net_minutes - 750;
			off_net_bill = off_net_additional * 1.50;
		}
		if (on_net_minutes > 1000)
		{
			on_net_additional = on_net_minutes - 1000;
			on_net_bill = on_net_additional;
		}
		total_amount_due = on_net_bill + off_net_bill + data_bill + 1000 + 1500;
		cout << "Your total amount due is: Rs" << total_amount_due << "\\-\n";
		//-------------------------------------------------------------//
		cout << "\n------------------------------------------------------------------------\n";
		cout << "Saving From Other Packages:\n";
		if (data_used > 1)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 1024);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 20;
		}
		if (off_net_minutes > 100)
		{
			off_net_additional = off_net_minutes - 100;
			off_net_bill = off_net_additional * 3.75;
		}
		if (on_net_minutes > 200)
		{
			on_net_additional = on_net_minutes - 200;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 100 + 500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package A would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package A\n";
		//-------------------------------------------------------------//
		if (data_used > 5)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 5120);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 15;
		}
		if (off_net_minutes > 250)
		{
			off_net_additional = off_net_minutes - 250;
			off_net_bill = off_net_additional * 3.25;
		}
		if (on_net_minutes > 350)
		{
			on_net_additional = on_net_minutes - 350;
			on_net_bill = on_net_additional * 2.25;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 800 + 350;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package B would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package B\n";
		//-------------------------------------------------------------//
		if (data_used > 7)
		{
			mbs = data_used * 1024;
			additional_mbs = (mbs - 7168);
			over_charges = additional_mbs / 100;
			data_bill = over_charges * 13;
		}
		if (off_net_minutes > 350)
		{
			off_net_additional = off_net_minutes - 350;
			off_net_bill = off_net_additional * 2.75;
		}
		if (on_net_minutes > 300)
		{
			on_net_additional = on_net_minutes - 300;
			on_net_bill = on_net_additional * 1.75;
		}
		total_amount_due2 = on_net_bill + off_net_bill + data_bill + 1000 + 500;
		if (total_amount_due2 < total_amount_due)
			cout << "Your Savings if you subscribed to Package C would be: Rs" << total_amount_due - total_amount_due2 << "\\-\n";
		else
			cout << "Your Current Subscribed Package is better than Package C\n";
		break;
	}
	}
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
