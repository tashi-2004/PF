//Question no 3


//yaha hum na 4 numbers print krwana. means that 1st one Second largest ho ga. aur baqi 3 Maximum number. 
#include <iostream>
using namespace std;
void func(int arr[5]);
int main()
{ int arr[5];
    for(int i=0;i<5;i++)
     {
     	cin>>arr[i];
	 }
  	 for(int i=0;i<5;i++)
     {
     	cout<<"Arrays are  "<<arr[i];
     	cout<<endl;
     }
     func(arr);
 }
 //function declare kro yaha pa
void func(int arr[5])
{
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max) //Maximum find krna aisa
		max=arr[i];
		
	}
	cout<<"Maximum is :"<<max<<endl;    //loop ma cout kro gae tou baar baar print kara ga ais lia nhi kia yaha pa

		cout<<endl;
	int arr3[4];
int temp;
    	for(int i=0;i<5;i++)
    	{
    	                    for(int j=i+1; j<5 ;j++)
    	                    {
    	                      if(arr[i]>arr[j])	//yaha pr agr ais(>) ki jaga (<) ya use kro gae tou Desending ma ho jae ga. Question ma hwa hwa.
    	                      {
    	                      	temp=arr[i];   //Swap aisa krta hy. ascending order ma kiya bas, 
    	                      	arr[i]=arr[j];
    	                      	arr[j]=temp;
							  }
							}
        }
       cout<<"Ascending Order  : ";
   for(int i=0;i<5;i++)
    	{
    		
    		cout<<arr[i]<<"  ";
    		
    	}
    	 cout<<endl;
	
	
		int arr2[4];
	for(int i=0;i<=3;i++)  
	{
		if(i==0)
		{
			arr2[i]=arr[3];
		}
		else
		{
    	arr2[i]=max;
    	
		}
		cout<<arr2[i]<<"  ";
	}
	
	
	
	
	
	
	
	}
