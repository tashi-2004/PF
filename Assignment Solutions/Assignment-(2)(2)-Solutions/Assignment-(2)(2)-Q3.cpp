// QUESTION_3_i22-1855.cpp : This file contains the 'main' function. Program execution begins and ends there.
//QUESTION 3
//LAIBA MAZHAR
//ROLL NO: I22-1855
#include<iostream>
using namespace std;
int main()
{
	int option;
	int menu;
	int menu_type;
	int burger_type;
	int Pakistani_food_type;
	int  paratha_roll_type;
	int total_burger_amount = 0;
	int total_paratha_amount = 0;
	int total_pakistani_food_amount = 0;
	char more_items;
	char more_burger;
	char more_paratha;
	char more_pakistani_food;
	int total_bill = 0;
	float bill;
	int burger_amount = 0;
	int paratha_amount = 0;
	int pakistani_food_amount = 0;
	float discount;
	int Dine_in = 0;
	cout << "###########-> WELCOME TO FAST CAFE <-###########\n";
	cout << "Please select the option:\n";
	cout << "  [0] Takeaway\n";
	cout << "  [1] Dine in\n";
	cout << "  [2] Delivery\n";
	cin >> option;
	if (option == 0)
	{
		cout << "###########-> WELCOME TO TAKEAWAY MENU <-###########\n";
	Dinein:
	moreitem:
		cout << " [0] Burger\n";
		cout << " [1] Paratha Roll\n";
		cout << " [2] Pakistani food\n";
		cin >> menu;
		if (menu == 0) // for burgers
		{
		moreburger:
			cout << "Select burger type: \n";
			cout << "[1] PF_Ragra11     (Rs: 299)\n";
			cout << "[2] OOP_Chatkhara  (Rs: 499)\n";
			cout << "[3]Hot_DS          (Rs: 599)\n";
			cout << "[4] RedHot_Algo    (Rs: 699)\n";
			cin >> burger_type;
			switch (burger_type)
			{
			case 1:
				burger_amount += 299;
				break;
			case 2:
				burger_amount += 499;
				break;
			case 3:
				burger_amount += 599;
				break;
			case 4:
				burger_amount += 699;
				break;
			default:
				cout << "Invalid Input";
				break;
			}
			cout << "Do you want any more burger?(Y or N)\n";
			cin >> more_burger;
			if (more_burger == 'y' || more_burger == 'Y')
			{
				goto moreburger;
			}
			total_burger_amount = burger_amount; //total price for burgers
			cout << "Do you want any other menu item?\n";
			cin >> more_items;
			if (more_items == 'y' || more_items == 'Y')
			{
				goto moreitem;
			}

		}
		else if (menu == 1)
		{
		moreparatha:
			cout << "Select the Roll paratha type:\n\n";

			cout << "[1] FAST_MalaiParatha        (Rs: 299)\n";
			cout << "[2] CS_Cheese Paratha        (Rs: 399)\n";
			cout << "[3] DS_Dhamaka Paratha       (Rs: 599)\n";
			cout << "[4] Al DoubleTrouble Paratha (Rs: 699)\n";
			cout << "[5] CY_SecurityTightParatha  (Rs:499)\n";
			cout << "[6] SE_Meetha Paratha        (Rs:199)\n";
			cout << "[7] EE_ParhakuParatha        (Rs:799)\n";

			cin >> paratha_roll_type;
			switch (paratha_roll_type)
			{
			case 1:

				paratha_amount += 299;
				break;
			case 2:
				paratha_amount += 399;
				break;
			case 3:
				paratha_amount += 599;
				break;
			case 4:
				paratha_amount += 699;
				break;
			case 5:
				paratha_amount += 499;
				break;
			case 6:
				paratha_amount += 199;
				break;
			case 7:
				paratha_amount += 799;
				break;
			default:
				cout << "Invalid Input";
				break;
			}
			cout << "Do you want any more paratha?\n";
			cin >> more_paratha;
			if (more_paratha == 'Y' || more_paratha == 'y')
			{
				goto moreparatha;
			}

			total_paratha_amount = paratha_amount; //total price for all parathas
			cout << "Do you want any other menu item?\n";
			cin >> more_items;
			if (more_items == 'y' || more_items == 'Y')
			{
				goto moreitem;
			}

		}
		// offering pakistani food
		else if (menu == 2)
		{
		morepakistanifood:
			cout << "Select Pakistani food type \n";
			cout << "1) pointerHaleem    (Rs: 199)\n";
			cout << "2) loopNihaari      (Rs: 199)\n";
			cout << "3) arrayDaal        (Rs: 149)\n";
			cout << "4) recursiveGhosht  (Rs: 399)\n";
			cin >> Pakistani_food_type;
			switch (Pakistani_food_type)
			{
			case 1:
				pakistani_food_amount += 199;
				break;
			case 2:
				pakistani_food_amount += 199;
				break;
			case 3:
				pakistani_food_amount += 149;
				break;
			case 4:
				pakistani_food_amount += 399;
				break;
			default:
				cout << "Invalid Input";
				break;
			}
			cout << "Do you want any more Pakistani food ?\n";
			cin >> more_pakistani_food;
			if (more_pakistani_food == 'Y' || more_pakistani_food == 'y')
			{
				goto morepakistanifood;
			}

			total_pakistani_food_amount = pakistani_food_amount;  //total price for all pakistani food selected
			cout << "Do you want any other menu item?\n";
			cin >> more_items;
			if (more_items == 'y' || more_items == 'Y')
			{
				goto moreitem;
			}
		}
		else {
			cout << "Invalid Input!\n";
			return 0;
		}
		total_bill = total_burger_amount + total_paratha_amount + total_pakistani_food_amount;
		//total bill of the user all food types all together.
		cout << "Your total bill is: " << total_bill;
		if (total_bill > 199 && total_bill < 1000)
		{
			discount = total_bill * 5 / 100;
			bill = total_bill - discount;
		}
		else if (total_bill >= 1000 && total_bill < 1500)
		{
			discount = total_bill * 10 / 100;
			bill = total_bill - discount;
		}
		else if (total_bill >= 1500 && total_bill < 2000)
		{
			discount = total_bill * 15 / 100;
			bill = total_bill - discount;
		}
		else if (total_bill >= 2000 && total_bill < 2500)
		{
			discount = total_bill * 20 / 100;
			bill = total_bill - discount;
		}
		else if (total_bill >= 2500 && total_bill < 3000)
		{
			discount = total_bill * 30 / 100;
			bill = total_bill - discount;
		}
		else
		{
			discount = total_bill * 50 / 100;
			bill = total_bill - discount;
		}
		cout << "Your grand total bill after respective discount is : RS " << bill << " \\-";
		Dine_in++;
	}

	else if (option == 1)
	{
		cout << "###########->WELCOME TO DINE IN MENU <-###########\n";
		if (Dine_in < 1)
		{
			goto Dinein;
		}
	}
	else if (option == 2)
	{
		cout << "###########->	WELCOME TO DELIVERY MENU <-###########\n";
		if (Dine_in < 1)
		{
			goto Dinein;
		}
	}
	else
	{
		cout << "Invalid input";
		return 0;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                Thanks for visiting!               " << endl;
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
