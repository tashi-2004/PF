#include <iostream>
using namespace std;
int fun(int X[],int Y[],int Z[],int P);
int main()
{ 
  int X[]={1,3,5,6};
  int Y[]={2,4,8};
  int Z[]={10,0};
  int M=4;
  int N=3;
  int O=2;
   int P=M+N+O;
   fun(X,Y,Z,P);
}
int fun(int X[],int Y[],int Z[],int P)
{
	
	int arr[P];
	int count=0;
	int ex=0;
	for(int i=0;i<P;i++)
	{
		if(i<4)
		arr[i]=X[i];
		else if( i>=4 && i<7)
		{
				arr[i]=Y[count];
				count++;
			
		}
	   else if( i>=7 && i<=8)
	   {
	   	
	   	arr[i]=Z[ex];
	   	ex++;
	   }
			
		
}
	for(int i=0;i<P;i++)
			{
				cout<<arr[i]<<" ";
			}
		
			
	
	
	
	for(int i=0;i<P;i++)
	{
	   for(int j=i+1;j<P;j++)
	   {
	   	if(arr[i]<arr[j])
        {
        	int temp=arr[i];
        	arr[i]=arr[j];
        	arr[j]=temp;
        	
		}
		
		
			   	
	   	
	   }
		
		
		
		
	}
	cout<<endl;
	cout<<"Decending order"<<endl;
		for(int i=0;i<P;i++)
		{
			cout<<arr[i] <<"    ";
				
			
		}
		return 0;
}
