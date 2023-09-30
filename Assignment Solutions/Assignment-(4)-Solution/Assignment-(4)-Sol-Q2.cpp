#include <iostream>
#include <iomanip>
using namespace std;
void sales(string name[],string item[],int quantity[],int cost[]);
int main()
{ 
    string name[]= {"Ali","Ali","Rayyan","Rayyan"};
    string item[]={"Fish & Chips","Burger","Chips", "Juice"};
    int quantity[]={2,1,1,1};
    int cost[]={100,150,250,80};
    cout<<setw(15)<<"NAME "<<setw(15)<<"ITEM"<<setw(15)<<"QUANTITY"<<setw(16)<<"COST"<<endl;
    sales(name,item,quantity,cost);
}



void sales(string name[],string item[],int quantity[],int cost[])
    {
	  for(int i=0;i<=3;i++)
	  {
	  	cout<<setw(15)<<name[i]<<setw(17)<<item[i]<<setw(15)<<quantity[i]<<setw(13)<<cost[i]<<endl;
	  	cout<<endl;
	  }
	  
	  // From here we started to find average
	       int average=0;
	           int add=0;
		    for(int i=0;i<=3;i++)
	        {
	          
	          add=add+cost[i];
	          
	        }
	        average=(add/4);
	        	cout<<"Average  :  "<<average;
	        	cout<<endl;
	        
	    
	        
	
	
	// yaha sa total sales find ki. Means Quantity kitni thi. agr 2 hy tou total price sa multiply. 
	
	
	
	
	for(int i=0;i<=3;i++)
	{
		cout<<"Total sales is equal to "<<quantity[i]*cost[i]<<endl;
	}
	
	
	
	}
