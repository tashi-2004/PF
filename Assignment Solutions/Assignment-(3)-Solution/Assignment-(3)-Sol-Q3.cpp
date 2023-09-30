#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
   string name,Contact;
   
   cout<<"Enter Name"<<endl;
   cin>>name;
   cout<<"Enter Contact Number"<<endl;
   cin>>Contact;
   cout<<setw(19)<<"Name(p)"<<setw(15)<<"Qty(Q)"<<setw(15)<<"PRICE(n)"<<endl;
   cout<<"1)"<<setw(19)<<"BEEF KOFTA CURRY"<<setw(15)<<"1"<<setw(15)<<"1500"<<endl;
   cout<<"2)"<<setw(19)<<"SARSON KA SAAG"<<setw(15)<<"1"<<setw(15)<<"800"<<endl;
   cout<<"3)"<<setw(19)<<"MUTTON KARAHI"<<setw(15)<<"1"<<setw(15)<<"3000"<<endl;
   cout<<"4)"<<setw(19)<<"BEAF KARAHI"<<setw(15)<<"1"<<setw(15)<<"2000"<<endl;
   cout<<"5)"<<setw(19)<<"CHICKEN KARAHI"<<setw(15)<<"1"<<setw(15)<<"1500"<<endl;
   cout<<"6)"<<setw(19)<<"KADHI PAKORA"<<setw(15)<<"1"<<setw(15)<<"800"<<endl;
   cout<<"7)"<<setw(19)<<"CHAPLI KABAB"<<setw(15)<<"1"<<setw(15)<<"500"<<endl;
   cout<<"8)"<<setw(19)<<"BEEF BIRYANI"<<setw(15)<<"1"<<setw(15)<<"800"<<endl;
   cout<<"9)"<<setw(19)<<"MUTTON BIRYANI"<<setw(15)<<"1"<<setw(15)<<"1200"<<endl;
   cout<<"10"<<setw(19)<<"BIRYANI"<<setw(15)<<"1"<<setw(15)<<"500"<<endl;
    cout<<"11)"<<setw(19)<<"MUTTON PULAO"<<setw(15)<<"1"<<setw(15)<<"1000"<<endl;
     cout<<"12)"<<setw(19)<<"BEEF PULAO"<<setw(15)<<"1"<<setw(15)<<"750"<<endl;
      cout<<"13)"<<setw(19)<<"CHICKEN PULAO"<<setw(15)<<"1"<<setw(15)<<"450"<<endl;
      cout<<"14)"<<setw(19)<<"HALEEM"<<setw(15)<<"1"<<setw(15)<<"300"<<endl;
      cout<<"15)"<<setw(19)<<"CHICKEN SAJJI"<<setw(15)<<"1"<<setw(15)<<"3500"<<endl;
      cout<<"16)"<<setw(19)<<"FINGER FISH "<<setw(15)<<"1 KG"<<setw(15)<<"800"<<endl;
      cout<<"17)"<<setw(19)<<"TIKKA KABAB"<<setw(15)<<"1 KG"<<setw(15)<<"1000"<<endl;
      cout<<"18)"<<setw(19)<<"SHAMI KABAB"<<setw(15)<<"1"<<setw(15)<<"650"<<endl;
      cout<<"19)"<<setw(19)<<"NIHARI"<<setw(15)<<"1"<<setw(15)<<"350"<<endl;
      cout<<"20)"<<setw(19)<<"PAAYA"<<setw(15)<<"1"<<setw(15)<<"350"<<endl;
      
      
      string p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20;
      p1="BEEF KOFTA CURRY";
      p2="SARSON KA SAAG";
      p3="MUTTON KARAHI";
      p4="BEAF KARAHI";
      p5="CHICKEN KARAHI";
      p6="KADHI PAKORA";
      p7="CHAPLI KABAB";
      p8="BEEF BIRYANI";
      p9="MUTTON BIRYANI";
      p10="CHICKEN BIRYANI";
      p11="MUTTON PULAO";
      p12="BEEF PULAO";
      p13="CHICKEN PULAO";
      p14="HALEEM";
      p15="CHICKEN SAJJI";
      p16="FINGER FISH ";
      p17="TIKKA KABAB";
      p18="SHAMI KABAB";
      p19="NIHARI";
      p20="PAAYA";
      
      int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18,n19,n20;
      n1=1500;
      n2=800;
      n3=3000;
      n4=2000;
      n5=1500;
      n6=800;
      n7=500;
      n8=800;
      n9=1200;
      n10=500;
      n11=1000;
      n12=750;
      n13=450;
      n14=300;
      n15=3500;
      n16=800;
      n17=1000;
      n18=650;
      n19=350;
      n20=350;
      int a,q,total=0;
      char y;
      for(int i=1;i<=6;i++)
      
      {
          cout<<"Which item you want"<<endl;
          cin>>a;
           cout<<"Please tell the amount of quantity you want"<<endl;
          cin>>q;
          if(a==1)
          {total=total+(n1*q);
          cout<<setw(20)<<p1<<setw(10)<<n1<<endl;}
          else if(a==2)
          {total=total+(n2*q);
          cout<<setw(20)<<p2<<setw(10)<<n2<<endl;}
          else if(a==3)
          {total=total+(n3*q);
          cout<<setw(20)<<p3<<setw(10)<<n3<<endl;}
          else if(a==4)
         { total=total+(n4*q);
          cout<<setw(20)<<p4<<setw(10)<<n4<<endl;}
          else if(a==5)
          {total=total+(n5*q);
          cout<<setw(20)<<p5<<setw(10)<<n5<<endl;}
          else if(a==6)
          {total=total+(n6*q);
          cout<<setw(20)<<p6<<setw(10)<<n6<<endl;}
          else if(a==7)
          {total=total+(n7*q);
          cout<<setw(20)<<p7<<setw(10)<<n7<<endl;}
          else if(a==8)
          {total=total+(n8*q);
          cout<<setw(20)<<p8<<setw(10)<<n8<<endl;}
         else  if(a==9)
          {total=total+(n9*q);
          cout<<setw(20)<<p9<<setw(10)<<n9<<endl;}
         else if(a==10)
          {total=total+(n10*q);
          cout<<setw(20)<<p10<<setw(10)<<n10<<endl;}
          else if(a==11)
          {total=total+(n11*q);
          cout<<setw(20)<<p11<<setw(10)<<n11<<endl;}
          else if(a==12)
          {total=total+(n12*q);
          cout<<setw(20)<<p12<<setw(10)<<n12<<endl;}
          else if(a==13)
          {total=total+(n13*q);
          cout<<setw(20)<<p13<<setw(10)<<n13<<endl;}
          else if(a==14)
          {total=total+(n14*q);
          cout<<setw(20)<<p14<<setw(10)<<n14<<endl;}
          else if(a==15)
          {total=total+(n15*q);
          cout<<setw(20)<<p15<<setw(10)<<n15<<endl;}
          else if(a==16)
          {total=total+(n16*q);
          cout<<setw(20)<<p16<<setw(10)<<n16<<endl;}
          else if(a==17)
          {total=total+(n17*q);
          cout<<setw(20)<<p17<<setw(10)<<n17<<endl;}
          else  if(a==18)
          {total=total+(n18*q);
          cout<<setw(20)<<p18<<setw(10)<<n18<<endl;}
          else if(a==19)
          {total=total+(n19*q);
          cout<<setw(20)<<p19<<setw(10)<<n19<<endl;}
          else if(a==20)
          {total=total+(n20*q);
          cout<<setw(20)<<p20<<setw(10)<<n20<<endl;}
          
         
          cout<<"Do you want anything else"<<endl;
          cin>>y;
          if(y=='Y'||y=='y')
          cout<<endl;
          else
          {break;}
          
       }
       cout<<"Total cost : "<<total<<endl;
       int GST;
       GST=(total*0.12);
       cout<<"GST COST : "<<GST<<endl;
       total=total+GST;
       cout<<"Total Amount with GST: "<<total<<endl;
       
      
      
      
      
      
      }
