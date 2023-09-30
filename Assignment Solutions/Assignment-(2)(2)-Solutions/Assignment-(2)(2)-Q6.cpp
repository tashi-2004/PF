// assignment-02-q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;
int main()
{
	//Declaring variables
	int bun_type;
	float bun_price;
	int cheese_type;
	int cheese_count = 0;
	char cheese_more;
	int patty_type;
	float patty_price=0;
	float cheese_price = 0;
	int addup_type;
	float addup_price=0;
	int addup_count = 0;
	char addup_more;
	int sauce_type;
	float sauce_price=0;
	int sauce_count=0;
	char  sauce_more;
	float total_price;
	//Displaying burger bun types
	cout << "Enter the type of BUN you want ? \n";
	cout << "[1]sesame seed.Pros\n";
	cout << "[2]potato.Pros\n";
	cout << "[3]english muffin.Pro\n";
	cout << "[4]Plain.Pros\n";
	cout << "[5]sliced bread.Pros\n";
	cin >> bun_type;

   //calculating buns prices
	switch (bun_type)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		bun_price = 0.72;
		break;
	default:
		cout << "Invalid Input. Try again putting a number between 1 and 5";
		break;
	}
// Displaying cheese types
cheese_offer:
	cout << "Enter the types of cheese:\n";

	cout << "[1]Cheddar Cheese Slice(processed)\n";
	cout << "[2]Monterey Jack\n";
	cout << "[3]Brie\n";
	cout << "[4]Pepper Jack\n";
	cout << "[5]Parmesan Cheese\n";
	cin >> cheese_type;

	switch (cheese_type)   //calculating cheese price
	{
		if (cheese_type == 0)
		{
			goto taste_turn_up; // IF user wanna skip cheese
		}

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cheese_price += 0.5;
		cheese_count++;
		break;
	default:
		cout << "Invalid Input. Try again putting a number between 1 and 5";
		break;
	}
	if (cheese_count < 2)
	{
		cout << "Do you want any other of cheese too?\n Press Y for yes and N for no!\n";
		cin >> cheese_more;
		// Offering any more cheese!
		if (cheese_more == 'y' || cheese_more == 'Y')
		{
			goto cheese_offer;
		}
//taste turn up!
	}
taste_turn_up:
	//displaying menu items for taste turn up.
	cout << "Enter the items you want to turn up the taste:\n";

	cout << "[1]ground beef\n";
	cout << "[2]hamburger patty\n";
	cout << "[3]ground chicken chunk patty\n";
	cout << "[4]Venison Burger patty\n";
	cout << "[5]Bison Burger patty \n";
	cin >> patty_type;
//calculating patty prices
	switch (patty_type)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		patty_price = 1.2;
		break;
	default:
		cout << "Invalid Input. Try again putting a number between 1 and 5";
		break;
	}
	 
	//fresh' N it up

moreitems_offer:
	//Displaying items for add up!
	cout << "What items you want to add to Fresh 'N it up ?\n";
	cout << "[1]Caramelized Onions\n";
	cout << "[2]Condiments\n";
	cout << "[3]Pickles\n";
	cout << "[4]Lettuce\n";
	cout << "[5]Chilies\n";
	cout << "[6]Bacon\n";
	cout << "[7]Chopped mushrooms\n";
	cout << "[8]Avocado\n";
	cin >> addup_type;

	switch (addup_type)
	{
		if (addup_type == 0)  //if the user wanna skip that category!
		{
			goto Sauce_offer;
		}
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
		addup_price += 0.2;
		 //calculating prices of the sauce!
		addup_count++;
		break;
	default:
		cout << "Invalid Input. Try again putting a number between 1 and 8";
		break;
	}
	if (addup_count < 3)
	{
		cout << "Do you want any other Fresh'N it up item too?\n Press Y for yes and N for no!\n";
		cin >> addup_more;
		if (addup_more == 'y' || addup_more == 'Y') 
		{
			goto moreitems_offer;
		}

	}
// displaying sauces
Sauce_offer:
	cout << "Enter the types of sauce you want to have?\n";
	cout << "[1]Barbecue Sauce\n";
	cout << "[2]Buffalo Sauce\n";
	cout << "[3]Pesto Mayo\n";
	cout << "[4]Herb or garlic butter,\n";
	cout << "[5]Spicy beer Mustard\n";
	cout << "[6]Ketchup\n";
	cout << "[7]Relish \n";
	cout << "[8]Chili Sauce\n";
	cout << "[9]Hot Sauce\n";
	cout << "[10]Sriracha\n";
	cout << "[11]Mayonnaise Sauce\n";
	cin >> sauce_type;

	switch (sauce_type)
	{
		if (sauce_type == 0)
		{
			goto price_finalising;
		}

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
		sauce_price += 0.3;
		sauce_count++;
		break;
	default:
		cout << "Invalid Input. Try again putting a number between 1 and 11";
		break;
	}
	if (sauce_count < 3)
	{
		cout << "Do you want any other type sauce too?\n Press Y for yes and N for no!\n";
		cin >> sauce_more;
		        if (sauce_more == 'y' || sauce_more == 'Y')
		        {
			      goto Sauce_offer;
		        }

	}
price_finalising:
	total_price=cheese_price + sauce_price + patty_price+bun_price + addup_price ;
	cout << "The total price for your Yum burger is:" << total_price << " $";
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
