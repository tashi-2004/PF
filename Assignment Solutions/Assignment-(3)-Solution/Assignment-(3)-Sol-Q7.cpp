#include<iostream>
  using namespace std;
  int main()
  {
      string x;
      int y;
      cout<<"Enter String"<<endl;
      cin>>x;
      y=x.size();
      if(y>6)
       {
          cout<<"Invalid.Enter Again"<<endl;
           cin>>x;
       }
       for(int i=0;i<y;i++)
       {
           int z=x[i];
            string Roll_no= "1765";
           cout<<z<<" ";
           Roll_no[i];
           cout<<Roll_no[i]<<"  ";
           if(i==3)
           cout<<1<<" ";
            
       }
      
       
       
  }
