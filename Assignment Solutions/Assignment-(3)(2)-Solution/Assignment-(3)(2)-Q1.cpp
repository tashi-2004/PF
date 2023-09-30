
#include <iostream>
using namespace std;

int main()
{
	//CALCULATING BIONOMIAL COEFFICIENT!
	    int rows;
	   	int n,k;
	    int denom = 1;
	    int nom = 1;
    	int temp = 1;
    	cout<<"To find C(n,k)\n";
    	//TAKE THE VALUES OF K AND N AS INPUT
	             	cout << "Enter the value of n :  \n";
					cin >> n;
					cout << "Enter the value of k:  \n";
					cin >> k;
					//THE LOOP CALCULATES THE FACTORIAL OF N IN NUMERATOR!
					for(int i=n; i>0; i--){
						nom *= i;
					}
					for(int i = k; i>0; i--){
						temp *= i;
					}
					for(int i=(n-k); i>0; i--){
						denom *= i;
					}
					denom *= temp;
					cout << "Binomial of (" << n << " , " << k << ") is :  " << nom/denom;
				     cout<<endl;
				     //TAKING THE NUMBER OF ROWS FOR TRIANGLE AS INPUT
	   cout<<"Enter the number of rows in your triangle: \n";
	   cin>>rows;
	   int pascals_triangle[rows][rows];
	   
       for(int i=0;i<rows;i++)
       {
       	//OUTER LOOP ITERATING THROUGH ROWS
    	    for(int j=0;j<=i;j++)
        	{ //INNER LOOP ITERATING THROUGH COLUMNS
    	    	if(j==0|| j==i){
				// ONLY FOR THE 1ST AND THE LAST INDEX!
            	     pascals_triangle[i][j] = 1;
            	     //FOR 1ST AND THE LAST INDICES OF EACH ROW IN 
            	     //PASCALS TRIANGLE
			   }
			else{ 
			 // FOR OTHER INDICES, IT FOLLOWS THE PATTERN!
			 // ADDING THE PRECEDING ABOVE AND EXACT ABOVE VALUES.
                     pascals_triangle[i][j] = pascals_triangle[i-1][j-1] + pascals_triangle[i-1][j];
                }
	    	}
		}
		// PRINITING THE PASCALS TRIANGLE FORMED!
	    for(int p=0;p<rows;p++)
	    {
	    	for(int q=0;q<=p;q++)
	    	{
	    		cout<<pascals_triangle[p][q];
			}
			cout<<endl;
		}
	   
    
   return 0;
}