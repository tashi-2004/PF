#include<iostream>
   using namespace std;
   int main()
   {
   	
   	
   	      /*    11         11
               2112        2112
              321123      321123
             43211234    43211234
            5432112345 5432112345
             43211234    43211234
               321123     321123
                2112       2112
                 11         11
   	*/
   	int d,pattern=0;
   	cout<<"largest number"<<endl;
   	cin>>d;
   	cout<<"number of the diamond";
   	cin>>pattern;
   	char n='1';
   	for(int i=1 ;i<=d ;i++)
   {
       for(int j=d-i;j>=1;j--)
       {
           cout<<" ";
       }
       char p='0';
   	for(int j=0 ;j<i; j++)
   	{
   		cout<<i-j;
   		n++;
   		p++;
     }
     for(int j=i-1;j>=0 ;j--)
     {
     	cout<<i-j;
	 }
	 
	 if(pattern==2)
	 {
	 	int sub=5;
	 	
	   for(int j=d-i;j>0;j--)
         {
           cout<<" ";
           sub--;
         }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
     	for(int j=0 ;j<i; j++)
     	{
   		cout<<i-j;
   		n++;
   		p++;
        }
       for(int j=i-1;j>=0 ;j--)
        {
          	cout<<i-j;
	   }	
	 	
	 	
	}
	if(pattern==3)
	
	{
		for(int j=d-i;j>0;j--)
         {
           cout<<" ";
          
         }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
     	for(int j=0 ;j<i; j++)
     	{
   		cout<<i-j;
   		n++;
   		p++;
        }
       for(int j=i-1;j>=0 ;j--)
        {
          	cout<<i-j;
	   }	
	 	
	}
	if(pattern==4)
	{
		for(int j=d-i;j>0;j--)
         {
           cout<<" ";
           
         }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
     	for(int j=0 ;j<i; j++)
     	{
   		cout<<i-j;
   		n++;
   		p++;
        }
       for(int j=i-1;j>=0 ;j--)
        {
          	cout<<i-j;
	   }	
	 	
	}
	if(pattern==5)
	{
		for(int j=d-i;j>0;j--)
         {
           cout<<" ";
          
         }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
     	for(int j=0 ;j<i; j++)
     	{
   		cout<<i-j;
   		n++;
   		p++;
        }
       for(int j=i-1;j>=0 ;j--)
        {
          	cout<<i-j;
	   }	
	 	
	}
	
     cout<<endl;
   }
   
   
   
   
   //reverse
   for(int i=d-1; i>0;i--)
   {
   	for(int j=d-i;j>=1;j--)
       {
           cout<<" ";
       }
       char p='0';
   	for(int j=0 ;j<i; j++)
   	{
   		cout<<i-j;
   		n++;
   		p++;
     }
     for(int j=i-1;j>=0 ;j--)
     {
     	cout<<i-j;
	 }
	 if(pattern==2)
	 {
	 	for(int j=d-i;j>=1;j--)
       {
           cout<<" ";
       }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
   	for(int j=0 ;j<i; j++)
   	{
   		cout<<i-j;
   		n++;
   		p++;
     }
     for(int j=i-1;j>=0 ;j--)
     {
     	cout<<i-j;
	 }
	 }
	 
	 
	 
	 
	 if(pattern==3)
	 {
	 		for(int j=d-i;j>=1;j--)
       {
           cout<<" ";
       }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
   	for(int j=0 ;j<i; j++)
   	{
   		cout<<i-j;
   		n++;
   		p++;
     }
     for(int j=i-1;j>=0 ;j--)
     {
     	cout<<i-j;
	 }
	 }
	 if(pattern==4)
	 {
	 		for(int j=d-i;j>=1;j--)
       {
           cout<<" ";
       }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
   	for(int j=0 ;j<i; j++)
   	{
   		cout<<i-j;
   		n++;
   		p++;
     }
     for(int j=i-1;j>=0 ;j--)
     {
     	cout<<i-j;
	 }
	 }
	 if(pattern==5)
	 {
	 		for(int j=d-i;j>=1;j--)
       {
           cout<<" ";
       }
       for(int j=d-i; j>0 ; j--)
         cout<<" ";
       char p='0';
   	for(int j=0 ;j<i; j++)
   	{
   		cout<<i-j;
   		n++;
   		p++;
     }
     for(int j=i-1;j>=0 ;j--)
     {
     	cout<<i-j;
	 }
	 }
	 cout<<endl;
   }
   
   
   
   
   
   
   
   
   
   }
