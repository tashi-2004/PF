#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// double x;
	long long int x;
	 cout << setw(40) << "83 1 85 7 80 6 69 5 82 1 95" << endl;
	// cin >> x;
	 x = 83185780669582195;
	/*cout << "enter the numbr";
	cin >> x;*/
	long long y=x;
	 
	 cout<<x<<endl;
	 int length=0;
	 //calculate length
while(y>0)
{
	y=y/10;
	length++;
}
//cout<<length<<endl;
int key=0;
int roll=0;int rollno=0;
long long sumkey=0;char deycrypt;string store;
      for(int i=0 ;i<6;i++)
      {
      	   key=x%100;
      	   deycrypt=x%100;
      	   x/=100;
      	   roll=x%10;
      	   x/=10;
      	   //sumkey=(sumkey*10)+key;
      	   rollno=(rollno*10)+roll;
      	   store+=deycrypt;
      	   
	  }
    
    
    
    
    
    
	 string reverse;
	 for(int i=5;i>=0; i--)
	 {
	 	reverse+=store[i];
	 }
	 
	 
	 int rev=0;
	 for(int i=0 ;i<5;i++)
	 {
	 	int rem =rollno%10;
	 	 rev=(rev*10)+rem;
	 	rollno/=10;
	 	
	 }
	 cout<<"decrypted key"<<reverse<<endl;
	 cout<<"roll number"<<rev<<endl;
	 
	 
	 
	 
	 
	 
	 
	 
}
