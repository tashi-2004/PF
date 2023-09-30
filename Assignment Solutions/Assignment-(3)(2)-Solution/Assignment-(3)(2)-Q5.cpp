// QUESTION5_I22-1855.cpp : This file contains the 'main' function. Program execution begins and ends there.
//LAIBA MAZHAR
//I22-1855
//QUESTION 5

#include <iostream>
using namespace std;
int main()
{

	int seatnumber;
	char n;
	int options;
	char again_tickets;
	int total_seats_Available = 0;
	float for_prices[15];
	for (int i = 1; i <= 15; i++)
	{
		cout << endl;
		cout << "enter price for " << i << " row";
		cin >> for_prices[i];
	}
	cout << "123456789101112131415161718192021222324252627282930\n";
	char seats[15][30];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			seats[i][j] = '#';
		}
	}
	//DISPLAYY
	for (int i = 0; i < 15; i++)
	{
		cout << "ROW ";
		for (int j = 0; j < 30; j++)
		{
			cout << seats[i][j];
		}
		cout << endl;
	}
	//
	char more_tickets = 1;
	int row_number, seat_number, cost = 0;
	int tickets = 0;
	int ticket_sales = 0;
	int row1_sold_tickets = 0;
	int row2_sold_tickets = 0;
	int row3_sold_tickets = 0;
	int row4_sold_tickets = 0;
	int row5_sold_tickets = 0;
	int row6_sold_tickets = 0;
	int row7_sold_tickets = 0;
	int row8_sold_tickets = 0;
	int row9_sold_tickets = 0;
	int row10_sold_tickets = 0;
	int row11_sold_tickets = 0;
	int row12_sold_tickets = 0;
	int row13_sold_tickets = 0;
	int row14_sold_tickets = 0;
	int row15_sold_tickets = 0;
	// INPUTING TICKETS AND 
	char show_tickets;
	for (int i = 0; i < more_tickets; i++)
	{

		cout << "How many tickets do you want: \n";
		cin >> tickets;
		for (int i = 0; i < tickets; i++)
		{
		again_row_input:
			cout << "Enter the row number for ticket #: " << i + 1 << endl;
			cin >> row_number;
			switch (row_number)
			{
			case 1:
				row1_sold_tickets++;
				break;
			case 2:
				row2_sold_tickets++;
				break;
			case 3:
				row3_sold_tickets++;
				break;
			case 4:
				row4_sold_tickets++;
				break;
			case 5:
				row5_sold_tickets++;
				break;
			case 6:
				row6_sold_tickets++;
				break;
			case 7:
				row7_sold_tickets++;
				break;
			case 8:
				row8_sold_tickets++;
				break;
			case 9:
				row9_sold_tickets++;
				break;
			case 10:
				row10_sold_tickets++;
				break;
			case 11:
				row11_sold_tickets++;
				break;
			case 12:
				row12_sold_tickets++;
				break;
			case 13:
				row13_sold_tickets++;
				break;
			case 14:
				row14_sold_tickets++;
				break;
			case 15:
				row15_sold_tickets++;
				break;
			default:
				cout << "Please enter any row number between 1 and 15 !" << endl;
				goto again_row_input;
				break;
			}
			cout << "Enter the seat number for ticket # " << i + 1 << endl;
		seat_again_input:
			cin >> seat_number;
			if (seat_number < 1 || seat_number>30)
			{
				cout << "Please enter any seat number between 1 and 30!" << endl;
				goto seat_again_input;
			}
			if (seats[row_number - 1][seat_number - 1] == '*')
			{
				cout << " Sorry! The seat has already been booked.\n\n Please chose any other seat: \n";
				goto again_row_input;
			}
			else
			{
				seats[row_number - 1][seat_number - 1] = '*';
			}

			ticket_sales++;
			cost += for_prices[row_number];
		}


		cout << "FINAL\n";
		for (int i = 0; i < 15; i++)
		{
			cout << "ROW " << i + 1 << ": ";
			for (int j = 0; j < 30; j++)
			{
				cout << seats[i][j];
			}
			cout << endl;
		}
		//////////////////////////////////
		cout << "TOTAL SEAT COST IS: " << cost << endl;
		cout << "Do you want any more ticket?(Y/N)";

		cin >> again_tickets;
		if (again_tickets == 'y' || again_tickets == 'Y')
		{
			more_tickets++;
		}

		cout << "To know how many tickets are sold in total, press y!\n";
		cin >> n;
		if (n == 'y' || n == 'Y')
		{
			cout << ticket_sales;
		}
		cout << "For further enquiry select any of the following!\n";
		cout << "[1]VIEW THE AMOUNT OF TICKETS, SOLD in EACH ROW\n";
		cout << "[2]VIEW THE AMOUNT OF TICKETS, AVAILABLE in EACH ROW\n";
		cout << "[3]VIEW THE TOTAL SEATS AVAILABLE IN AUDITORIUM\n ";
		cin >> options;
		switch (options)
		{
		case 1:
			cout << "seats sold in row 1: " << row1_sold_tickets << endl;
			cout << "seats sold in row 2: " << row2_sold_tickets << endl;
			cout << "seats sold in row 3: " << row3_sold_tickets << endl;
			cout << "seats sold in row 4: " << row4_sold_tickets << endl;
			cout << "seats sold in row 5: " << row5_sold_tickets << endl;
			cout << "seats sold in row 6: " << row6_sold_tickets << endl;
			cout << "seats sold in row 7: " << row7_sold_tickets << endl;
			cout << "seats sold in row 8: " << row8_sold_tickets << endl;
			cout << "seats sold in row 9: " << row9_sold_tickets << endl;
			cout << "seats sold in row 10: " << row10_sold_tickets << endl;
			cout << "seats sold in row 11: " << row11_sold_tickets << endl;
			cout << "seats sold in row 12: " << row12_sold_tickets << endl;
			cout << "seats sold in row 13: " << row13_sold_tickets << endl;
			cout << "seats sold in row 14: " << row14_sold_tickets << endl;
			cout << "seats sold in row 15: " << row15_sold_tickets << endl;
			break;
		case 2:
			cout << "Seats  available in row 1:  " << (30 - row1_sold_tickets) << endl;
			cout << "Seats  available in row 2:  " << (30 - row2_sold_tickets) << endl;
			cout << "Seats  available in row 3:  " << (30 - row3_sold_tickets) << endl;
			cout << "Seats  available in row 4:  " << (30 - row4_sold_tickets) << endl;
			cout << "Seats  available in row 5:  " << (30 - row5_sold_tickets) << endl;
			cout << "Seats  available in row 6:  " << (30 - row6_sold_tickets) << endl;
			cout << "Seats  available in row 7:  " << (30 - row7_sold_tickets) << endl;
			cout << "Seats  available in row 8:  " << (30 - row8_sold_tickets) << endl;
			cout << "Seats  available in row 9:  " << (30 - row9_sold_tickets) << endl;
			cout << "Seats  available in row 10: " << (30 - row10_sold_tickets) << endl;
			cout << "Seats  available in row 11: " << (30 - row11_sold_tickets) << endl;
			cout << "Seats  available in row 12: " << (30 - row12_sold_tickets) << endl;
			cout << "Seats  available in row 13: " << (30 - row13_sold_tickets) << endl;
			cout << "Seats  available in row 14: " << (30 - row14_sold_tickets) << endl;
			cout << "Seats  available in row 15: " << (30 - row15_sold_tickets) << endl;
			break;
		case 3:
			total_seats_Available = 450 - (row1_sold_tickets + row1_sold_tickets + row2_sold_tickets +
				row3_sold_tickets + row4_sold_tickets + row5_sold_tickets +
				row6_sold_tickets + row7_sold_tickets + row8_sold_tickets + row9_sold_tickets +
				row10_sold_tickets + row11_sold_tickets + row12_sold_tickets +
				row13_sold_tickets + row14_sold_tickets + row15_sold_tickets);
			cout << "total_seats_available in the auditorium are: " << total_seats_Available << endl;
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}


	}
	cout << "Your total cost for all the tickets is: " << cost;

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
