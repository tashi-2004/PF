#include <iostream>

using namespace std;

int main()
{
    int d = 0;
    cout << "enter teh value";
    cin >> d;



    for (int i = 1; i <= 13; i++)
    {

        for (int j = 1; j < 4; j++)
        {

           if ((j == 1 || j == 2 || j == 3 ) && i != 2)
                cout <<" ";
           if (i == 2)
               cout <<"-";

        }

        for (int j = 0; j < 11 * d; j++)
            cout << "*";
        for (int j = 0; j < 3; j++)
        {   if(i==2)
            cout << "-";
        }
        cout << endl;



    }
    for (int i = 1; i <= 18; i++)
    {
       for (int j = 1; j <4; j++)
        {
            if ((j == 1 || j == 2 || j == 3 || j == 15*d || j == 16*d || j == 17*d))
                cout << " ";
            //if (j == 6 )
              //  cout << "|";
            
        }
       for (int i = 0; i < 2*d; i++)
           cout << "*";
        
        int k = 0;
        while (k < 1)
        {
            cout << "|";
            k++;
        }
        for (int j = 0; j <6*d; j++)
            cout << "*";
        k = 0;
        while (k < 1)
        {
            cout << "|";
            k++;
        }
        k = 0;
            while (k < 2*d)
            {
                cout << "*";
                k++;
            }
        cout << endl;
    }

   int k = 0;
   while (k < 4)
   {
       for (int j = 0; j <5; j++)
       {
           if (j == 2 || j == 3 )
               cout << "|";
           if (j == 1 || j == 16)
               cout << " ";
     
       }
       for (int i = 0; i < 2 * d; i++)
           cout << "*";
       k++;
       int p = 0;
       while (p < 1)
       {
           cout << "|";
           p++;
       }

       for (int j = 0; j < 6 * d; j++)
           cout << "*";
        p = 0;
       while (p < 1)
       {
           cout << "|";
           p++;
       }
       for (int i = 0; i < 2 * d; i++)
           cout << "*";
       p = 0;
       while (p < 2)
       {
           cout << "|";
           p++;
       }
       cout << endl;
   }
   k = 0;
   while (k<14*d)
   {
       if (k == 1 || k == 0 || k == 2 ||k==28||k==27||k==26)
           cout << " ";

       else
           cout << "-";

       k++;
   }
   cout << endl;
   for (int i = 0; i < 4; i++)
   {
       k = 0;
       while (k < 3)
       {
           cout << " ";
           k++;
       }
       for (int j = 0; j < 11*d; j++)
           cout << "^";
       cout << endl;
   }

    return 0;
}
