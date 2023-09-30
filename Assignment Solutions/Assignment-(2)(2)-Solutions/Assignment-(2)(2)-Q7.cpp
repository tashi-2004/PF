// Assignment_02_Q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;
int main()
{
	float percentage1;
	float percentage2;
	int question;
	int option;
	int scholarship;
	int subj_chosen;
	float a, b,c,d;
	float  percentage_1;
	float percentage_2;
	float add_math_percentage;
	float weightage_calculation_1;
	float level_weightage_1;
	float weightage_calculation_2;
	float level_weightage_2;
	float academic_weightage;
	float Adm_test_req_percentage;
	int test_marks_required;
	bool blood_relations=false;
	bool maternal_cousin=false;
	bool paternal_cousin=false;
	char sibs;
	char alumnus;
	char cznz;
	float e,f;
	int test_weightage;
	int test_marks;
	int preferred_degree;
	int merit;
	bool add_math = false;
	cout<< "What do you want to enquire about eligibility of admissions ? \n";
	cout << "[1]Is a persin eligible to apply for FAST - NUCES ?\n";
	cout << "[2]Is there any scholarship offered by the university?\n";
	cin >>question;
	if (question == 1 || question == 2)
	{
		if (question == 1)
		{
			cout << "Which educational system was opted? \n";
			cout << "[1] O/A Levels.\n";
			cout << "[2] Matric/FSc.\n";
			cin >> option;

			if (option == 1)
			{
				cout << "Enter the O levels percentage: \n";
				cin >> percentage1;
				cout << "Enter the A levels percentage: \n";
				cin >> percentage2;

			}
			else
			{
				cout << "Enter the Matric percentage: \n";
				cin >> percentage1;
				cout << "Enter the FSc percentage: \n";
				cin >> percentage2;
			}
			cout << "Enter your subjects chosen: \n";
			cout << "[1]Pre -Medical\n";
			cout << "[2]Pre -Engineering\n";
			cin >> subj_chosen;
			if (subj_chosen == 1)
			{
				cout << "Enter you Add_Maths percentage:\n";
				cin >> add_math_percentage;
				if (add_math_percentage >= 50)
				{
				 			
		
						a = (percentage1 / 100.0);
						b = (15.0 / 100.0);
						weightage_calculation_1 =a *b ;
					    level_weightage_1= weightage_calculation_1 * 100.0;
						cout << level_weightage_1 << endl;
						c = (percentage2 / 100.0);
						d = (35.0 / 100.0);
						weightage_calculation_2 = c * d;
					    level_weightage_2 = weightage_calculation_2 * 100.0;
						cout << level_weightage_2;
						academic_weightage = level_weightage_1 + level_weightage_2;
						Adm_test_req_percentage = 75 -	academic_weightage ;
						test_marks_required = 250 * Adm_test_req_percentage / 50;
						cout << "The student needs " << Adm_test_req_percentage << " % score in the admission test to be eligible\n";
						cout << "The student needs " << test_marks_required << " marks in the admission test to be eligible\n";
				}
				else
				{
					cout << " Student is not eligible for FAST_NUCES\n";
					return 0;
				}
			}
			else if (subj_chosen == 2) {
				a = (percentage1 / 100.0);
				b = (15.0 / 100.0);
				weightage_calculation_1 = a * b;
				level_weightage_1 = weightage_calculation_1 * 100.0;
				cout << level_weightage_1 << endl;
				c = (percentage2 / 100.0);
				d = (35.0/ 100.0);
				weightage_calculation_2 = c * d;
				level_weightage_2 = weightage_calculation_2 * 100.0;
				cout << level_weightage_2;
				academic_weightage = level_weightage_1 + level_weightage_2;
				Adm_test_req_percentage = 75 - academic_weightage;
				test_marks_required = 250 * Adm_test_req_percentage / 50;
				cout << "The student needs " << Adm_test_req_percentage << " % score in the admission test to be eligible\n";
				cout << "The student needs " << test_marks_required << " marks in the admission test to be eligible\n";
			}
            cout<<endl;
			cout << "ENTER YOUR PREFERRED DEGREE PROGRAM:\n"<< endl;
			cout << " _____________________________________\n";
			cout << "|[1]|BS SOFTWARE ENGINEERING      |79%|\n";
			cout << "|[2]|BS COMPUTER SCIENCES         |80%|\n";
			cout << "|[3]|BS ARTIFICIAL INTELLIGENCE   |75%|\n";
			cout << "|[4]|BS DATA SCIENCES             |76%|\n";
			cout << "|[5]|BS  CYBER SECURITY           |77%|\n";
			cout << "|[6]|BS ELECTRICAL ENGINEERING    |76%|\n";
            cout << "|___|_____________________________|___|\n";
			cin >> preferred_degree;
			switch (preferred_degree)
			{
			case 1:
				merit = 79;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS SOFTWARE ENGINEERING " << test_marks <<" out of 250\n";
				break;
			case 2:

				merit = 80;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS COMPUTER SCIENCES " << test_marks << " out of 250\n";
				break;
			case 3:
				
				merit = 75;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS ARTIFICIAL INTELLIGENCE is " << test_marks << " out of 250\n";
				break;
			case 4:

				merit = 76;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS DATA SCIENCES is " << test_marks << " out of 250\n";
				break;
			case 5:

				merit = 77;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS  CYBER SECURITY is " << test_marks << " out of 250\n";
				break;
			case 6:

				merit = 76;
				test_weightage = merit - academic_weightage;
				test_marks = 250 * test_weightage / 50;
				cout << "The test score you need for the BS ELECTRICAL ENGINEERING is " << test_marks << " out of 250\n";
				break;
			default:
				cout << "DEGREE NOT AVAILABLE!";
			}
		}
		else //PART 2
		{
			cout << "Which educational system was opted? \n";
			cout << "[1] O/A Levels.\n";
			cout << "[2] Matric/FSc.\n";
			cout << "[3] Is FAST, nuces Alumnus in Family?\n";
			cin >> option;
			if (option == 1)
			{  
					cout << "Enter the O levels percentage: \n";
					cin >> percentage_1;
					cout << "Enter the A levels percentage: \n";
					cin >> percentage_2;
			}
			else 
			{
				if (option == 2) {
					cout << "Enter the Matric percentage: \n";
					cin >> percentage_1;
					cout << "Enter the FSc percentage: \n";
					cin >> percentage_2;
				}
			}
			
			cout << " _____________________________________\n";
			cout << "|O-LEVELS          |90% above   |10%  |\n";
			cout << "|A-LEVELS          |90% above   |30%  |\n";
			cout << "|MATRIC            |90% above   |10%  |\n";
			cout << "|FSc               |90% above   |30%  |\n";
			cout << "|BLOOD RELATION    |            |20%  |\n|(siblings, parents)                  |\n";
			cout << "|MATERNAL OR       |            |10%  |\n|PATERNAL COUSINS                     |\n";
		    cout << "|__________________|____________|_____|\n";
		    cout<<"\n\n";
		    cout << "Do you have any alumus studying in FAST ?\n Press Y for yes and Press N for no.\n\n";
			cin >> alumnus;
			if(percentage_2 >= 90)
			{
				scholarship=30;
		    	cout << "Congrats! You are eligible for the scholarship!" << endl;
		    	cout<<"  You are awarded with "<<scholarship<<"% scholarship!\n";
			}
			else
			{
				cout<<"Are they your siblings? (Y or N)\n\n";
				cin>>sibs;
			if (sibs == 'y' || sibs == 'Y')
			{
				 	scholarship=20;
				 	cout << "Congrats! You are eligible for the scholarship!\n" << endl;
			}
			else{
				cout<<"Are they your maternal or paternal cousins?(Y or N)\n\n";
				cin>>cznz;
				if (percentage_1 >= 90|| cznz == 'y' || cznz == 'Y')
			     {
			       cout << "Congrats! You are eligible for the scholarship!\n" << endl;
				   scholarship=10;
			     }
		    	}
		    		cout<<"You are awarded with "<<scholarship<<"% scholarship!\n\n";
		    		
		    }
		    
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
