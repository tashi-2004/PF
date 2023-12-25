#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //BITWISE OPERATORS
    cout << "Learning bitwise operators" << endl;

    int x = 4, y = 10;

    cout << "And operator: x & y = " << (x&y) << endl;
    cout << "Or operator: x | y = " << (x|y) << endl; 
    cout << "Xor operator: x ^ y = " << (x^y) << endl; 
    cout << "Not Operator: ~x = " << ~x << endl;
    cout << "Not Operator: ~y = " << ~y << endl;
    cout << "Left shift: y >> 1 = " << (y>>1) << endl;
    cout << "Right shift: y << x = " << (y<<x) << endl;




    //Odd Even using bitwise

    int num = 87 ;
    (num & 1) ? cout<<"Odd" : cout<< "Even" ;
 

    //2's compliment
    cout << "Q: Find 2's compliment of x." << endl;

    int comp1 = ~x;
    int comp2 = comp1 + 1;

    cout << "2's compliment of x is = " << comp2 << endl; 





    //Addition using bitwise operator
    
    int carry;
    int a= x, b = y;
    while (b != 0)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }

    cout << "x + y = " << a << endl;

    //Convert to binary
    int temp = y;
    int ans = 0;
    for (int i = 0; temp != 0; i++)
    {
        int z = temp%2;
        temp = temp/2;
        ans += z*(pow(10, i));
    }

    cout << "Binary number for " << y << " is = " << ans << endl;

    //signed and unsigned in bitwise operators
    unsigned int n1 = 1;
    signed int n2 = 1;
    cout<<"Signed Result "<< ~n2 <<endl ;
    cout<<"Unsigned Result "<< ~n1 << endl ;


    return 0;
}