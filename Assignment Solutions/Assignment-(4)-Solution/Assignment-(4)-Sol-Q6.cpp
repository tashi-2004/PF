//Take two arrays and add them in third one. but print  1st element of first array first and than 2nd element will be 1st element of second array
    

#include <iostream>
using namespace std;
void func(int arr1[4],int arr2[4]);
int main()
{
	int arr1[4]={1,3,8,10};
    
    int arr2[4]={2,4,5,6};
    
    
	func(arr1,arr2);
}
void func(int arr1[4],int arr2[4])
{
	int arr3[8];int j=0;
	
	for(int i=0;i<8;i++)
	 {                             //We use even and odd things here. for example: i is used for first array index and j is used for second array index.   
	if(i%2==0)
	{
		arr3[i]=arr1[j];   //ab i ki value 0 tou if wali statement ma aya gya. jb aus ma aya tou arr3 ka 0 index pa arr1 ka o index aya gya
	}
	else
	{
		arr3[i]=arr2[j]; //ab i ki value 1 tou else ma aya gya. Ab arr3 ka 2nd index pa arr2 kae 1st index wala element aya gya.
		 
          j++; //( ab i ki value 1 ho gae ais lia else pa aya gya. arr3 ka 1st index hy aur arr2 ka 0 index hy. arr3 ka 1st index pa arr2 ka 1st element aya jae ga) ab j++ kr dia. j ki value 1 ho gae. agy loop chalta jae ga
	}
}

	for(int i=0;i<8;i++)
	
	{
		cout<<arr3[i];
		cout<<endl;
	}
		
	}
	
