#include <iostream>
    using namespace std;

    int main()
    {
        string name;
        cout << "Enter Name:" << endl;
        cin >> name;
        long long int ID;
        cout << "Enter ID" << endl;
        cin >> ID;
        
        int p = (ID / 1000000000000.0);
        switch (p)
        {
        case 1:
            cout << "province of ="<<name<<"=Khyber Pakhtun Khwa" << endl;
            break;
        case 2:
            cout << "province of =" <<name<<"=Fata" << endl;
            break;
        case 3:
        cout << "province of =" <<name<<"=Punjab" << endl;
              
        case 4:
            cout << "province of =" <<name<<"=Sindh" << endl;
        break;
        case 5:
            cout << "province of =" <<name<<"=Balochistan" << endl;
            break;
        case 6:
            cout << "province of  =" <<name<<"=Islamabad" << endl;
            break;
        case 7:
            cout << "province of  =" <<name<<"=Gilgit Baltistan" << endl;
            break;

        }
        if (ID % 10 == 0)
        {
            cout << "Gender of " << name<< " Female" << endl;
         }
        else
        {
            cout << "Gender of " << name<< "  Male" << endl;
        }
       
       



        long long int F = (ID / 10);
        F = F % 10000000;
        cout << "Family tree of" << name << " = " << F << endl;
        long long int U = (ID / 100000000);
        U = U % 10;
        cout << "Union Council:" << name << " =" << U << endl;

        long long int T = (ID / 1000000000);
        T = T % 10;
        cout << "tehsil Council:" << name << " = " << T << endl;


        long long int dis = (ID / 10000000000);
        dis = dis % 10;
        cout << "district Council:" << name << " = " << dis << endl;

        long long int div = (ID / 100000000000);
        div = div % 10;
        cout << "division Council:" << name << " =" << div << endl;


        return 0;

    }
