#include<iostream>
using namespace std;
int main() {
    int no1, no2, i, sum,result,avg;
    cout << "1st number" << endl;
    cin >> no1;
    cout << "2nd number" << endl;
    cin >> no2;
  
    if (no2 != 0) {
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        result = (no1 & no2);
        no1 = no1 ^ no2;
        no2 = result << 1;
        
        
        
        
        
        cout << "sum " << no1<< endl;
        //avg = no1 >> 1;
    }
    
    
     avg=no1>>1;
    
	cout<<"Average is " << avg << endl;
}
