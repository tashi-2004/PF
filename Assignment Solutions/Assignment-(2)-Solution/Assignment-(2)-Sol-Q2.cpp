#include <iostream>
#include <iomanip>
using namespace std;

    int main()
    {
        cout << setw(50) << "hi-lo" << endl;
        int num;
       srand(time(0));
        num = rand() % 100;
        int y;
        cout << "Enter Number:" << endl;
        cin >> y;
        if ((y <= 0) || (y > 100))
        {
            cout << "Invalid Number.Enter Again:" << endl;
            cin >> y;
        }
        if (y > num)
            cout << "your number is greater than the desire number" << endl;
        if (y < num)
            cout << "your number is smaller than the desire number" << endl;
        if (num == y)
        {
            cout << "Won the game" << endl;
        }
        else
        {
            cout << "Enter Number again:" << endl;
            cin >> y;
            
            if ((y <= 0) || (y > 100))
            {
                cout << "Invalid Number.Enter Again:" << endl;
                cin >> y;
            }
                if (y > num)
                cout << "your number is greater than the desire number"<<endl;
                 if(y<num)
                cout << "your number is smaller than the desire number"<<endl;
            if (num == y)
            {
                cout << "Won the game" << endl;
            }
            else
            {
                cout << "Enter Number again:" << endl;
                cin >> y;
                if ((y <= 0) || (y > 100))
                {
                    cout << "Invalid Number.Enter Again:" << endl;
                    cin >> y;
                }
                if (y > num)
                    cout << "your number is greater than the desire number"<<endl;
                if (y < num)
                    cout << "your number is smaller than the desire number"<<endl;
                if (num == y)
                {
                    cout << "Won the game" << endl;
                }
                else
                {
                    cout << "Enter Number again:" << endl;
                    cin >> y;
                    if ((y <= 0) || (y > 100))
                    {
                        cout << "Invalid Number.Enter Again:" << endl;
                        cin >> y;
                    }
                    if (y > num)
                        cout << "your number is greater than the desire number"<<endl;
                    if (y < num)
                        cout << "your number is smaller than the desire number"<<endl;
                    if (num == y)
                    {
                        cout << "Won the game" << endl;
                    }
                    else
                    {
                        cout << "Enter Number again:" << endl;
                        cin >> y;
                        if ((y <= 0) || (y > 100))
                        {
                            cout << "Invalid Number.Enter Again:" << endl;
                            cin >> y;
                        }
                        if (y > num)
                            cout << "your number is greater than the desire number"<<endl;
                        if (y < num)
                            cout << "your number is smaller than the desire number"<<endl;
                        if (num == y)
                        {
                            cout << "Won the game" << endl;
                        }
                        else
                            cout << "YOU LOST THE GAME.AS NONE OF YOUR NUMBER MATCH.AS NUMBER WAS "<<num << endl;

                    }
                }
            }
        }
    }
