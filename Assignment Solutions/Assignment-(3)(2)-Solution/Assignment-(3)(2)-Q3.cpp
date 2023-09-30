//LAIBA MAZHAR
//I22-1855
//QUESTION 3
#include <iostream>
#include <cstdlib>
using namespace std;

//DECLARING ARRAYS OF CONST SIZE
//FOR EACH ELEMENT
const int Capacity=200;
int QuantityShoes[Capacity];
int ShoeSize[Capacity];
int ShoePrice[Capacity];
int ShoeId[Capacity];
int CurrentShoes=0;
int id=1;

// 

int main()
{
    cout<<"WELCOME TO THE SHOE STORE INVENTORY"<<endl;

   cout<<endl<<endl<<"Press 1 to Display Shoe Wear Inventory else Press any other key to exit! : ";
    int decide;
    cin>>decide;
    
    
    // STORING SOME DATA IN ARRAYS(HARDCODE)
                ShoeId[CurrentShoes]=id;
                QuantityShoes[CurrentShoes]=2;
                ShoeSize[CurrentShoes]=6;
                ShoePrice[CurrentShoes]=2500;
                CurrentShoes=CurrentShoes+1;
                id++;
                
                
                  ShoeId[CurrentShoes]=id;
                QuantityShoes[CurrentShoes]=3;
                ShoeSize[CurrentShoes]=9;
                ShoePrice[CurrentShoes]=4000;
                CurrentShoes=CurrentShoes+1;
                id++;
                
                
                ShoeId[CurrentShoes]=id;
                QuantityShoes[CurrentShoes]=7;
                ShoeSize[CurrentShoes]=10;
                ShoePrice[CurrentShoes]=5000;
                CurrentShoes=CurrentShoes+1;
                id++;
           //DISPLAYING THE 
		   //STORED INVENTORY! 
    if (decide==1)
    {
        cout<<endl;
    int sum=0;
                int total=0;
                int Price=0;
                int i=0;
                while  ( i<CurrentShoes)
                {
                    sum=sum+QuantityShoes[i];
                    i++;
                }
                i=0;
                // FOR PRICE
                while (i<CurrentShoes)
                {
                    
                    Price=Price+(QuantityShoes[i]*ShoePrice[i]);
                    i++;
                }
                cout<<"The Total Number of Shoes: "<< sum<<endl;
                cout<<"     ShoeId"<<"      ShoeQuantity"<<"        ShoeSize"<<"        PricePerShoe(PKR)"<<endl;
                i=0;
                while (i<CurrentShoes)
                {
                        cout<<"     "<<ShoeId[i]<<"              "<<QuantityShoes[i]<<"                 "<<ShoeSize[i]<<"                   "<<ShoePrice[i]<<endl;
                i++;
                }
                // DISPLAYING THE CALCULATED PRICE OF ALL THE
                //ELEMENTS OF THE INVENTORY IN TOTAL
                cout<<"The Total Price Amount of Shoes: "<<Price<<" PKR "<<endl;
    cout<<endl;
        int input;
           // OPTIONS TO PERFORM SOME TASKS
           // cout<<"SHOES CATEGORY: CASUALWEAR"<<endl;
            cout<<"Please Select One of these Options: "<<endl;
            cout<<"Press 1 to add item to Casual Category"<<endl;
            cout<<"Press 2 to remove item from Casual Category"<<endl;
            cout<<"Press 3 to update the quantity of an existing item"<<endl;
            cout<<"Press 4 to Update the Price of an Existing Item"<<endl;
            cout<<"Press 5 to Display the Inventory and the total value of the Inventory"<<endl;
            
            cin>>input;
            //ADDING A NEW ITEM TO INVENTORY
            Start:
            if (input==1)
            {
                int ID;
                int QUANTITY;
                int PRICE;
                int SIZE;
                //TAKING INPUT OF INFO OF NEW 
                //ITEM TO BE ADDED
               
                cout<<endl<<"Enter QUANTITY:";
                cin>>QUANTITY;
                
                cout<<endl<<"Enter PRICE:";
                cin>>PRICE;
                
                cout<<endl<<"SIZE:";
                cin>>SIZE;
                
            
              //STORING INFO OF THAT NEW ITEM
              //TO THE INVENTORY
                ShoeId[CurrentShoes]=id;
                QuantityShoes[CurrentShoes]=QUANTITY;
                ShoeSize[CurrentShoes]=SIZE;
                ShoePrice[CurrentShoes]=PRICE;
                CurrentShoes=CurrentShoes+1;
                id++;
                
                
                int sum=0;
                int total=0;
                int Price=0;
                int i=0;
                while  ( i<CurrentShoes)
                {
                    sum=sum+QuantityShoes[i];
                    i++;
                }
                i=0;
                
                while (i<CurrentShoes)
                {
                    
                    Price=Price+(QuantityShoes[i]*ShoePrice[i]);
                    i++;
                }
                //DIPLAYING THE UPDATED ADDED ITEM INVENTORY
                cout<<"The Total Number of Shoes: "<< sum<<endl;
                cout<<"     ShoeId"<<"      ShoeQuantity"<<"        ShoeSize"<<"        PricePerShoe(PKR)"<<endl;
                i=0;
                while (i<CurrentShoes)
                {
                        cout<<"     "<<ShoeId[i]<<"              "<<QuantityShoes[i]<<"                 "<<ShoeSize[i]<<"                   "<<ShoePrice[i]<<endl;
                i++;
                }
                
                cout<<"The Total Price Amount of Shoes: "<<Price<<" PKR "<<endl;
                        }
            // DELETING AN ITEM FROM THE INVENTORY
            else if (input==2)
            {
                int ID;
                cout<<"Please Enter the Id of shoes to be deleted: ";
                cin>>ID;
   
               
                //FINDING THAT ITEM IN THE 
                //INVENTORY
                int i=0;
                while(i<CurrentShoes)
                {
                //	IF ID GETS MATCHED
                    if(ShoeId[i]==ID)
                    {
                        int j=i;
                        //SHIFTING THE ELEMENTS 
                        // OF ALL THE ELEMENTS OF 
                        //THE INVENTORY TO THE PREVIOUS INDICES
                        // IN ORDER TO VANISH SPACE 
                    while(j<(CurrentShoes-1)){
                            ShoeId[j] = ShoeId[j+1];
                            ShoeSize[j]=ShoeSize[j+1];
                            QuantityShoes[j]=QuantityShoes[j+1];
                            ShoePrice[j]=ShoePrice[j+1];
                        j++;
                        }
                        //SIZE UPDATION
                  CurrentShoes--;
                    }
                    i++;
                }
                //ITEM SUCCESSFULYY DELETED
                cout<<endl<<"Deletion Successfull! The Updated Inventory is given below."<<endl;
         
                                 int sum=0;
                    int total=0;
                    int Price=0;
                    int a=0;
                    while  ( a<CurrentShoes)
                    {
                        sum=sum+QuantityShoes[a];
                        a++;
                    }
                    a=0;
                    while (a<CurrentShoes)
                    {
                        
                        Price=Price+(QuantityShoes[a]*ShoePrice[a]);
                        a++;
                    }
                    cout<<"The Total Number of Shoes: "<< sum<<endl;
                    cout<<"     ShoeId"<<"      ShoeQuantity"<<"        ShoeSize"<<"        PricePerShoe(PKR)"<<endl;
                    a=0;
                    while (a<CurrentShoes)
                    {
                            cout<<"     "<<ShoeId[a]<<"              "<<QuantityShoes[a]<<"                 "<<ShoeSize[a]<<"                   "<<ShoePrice[a]<<endl;
                    a++;
                    }
                    //DISPLAYING THE INVENTORY AFTER DELETION OF THE ITEM
                    cout<<"The Total Price Amount of Shoes: "<<Price<<" PKR "<<endl;
                            }
                    
            else if (input==3)
            { 
			   //UPDATING THE QUANTITY OF AN EXISTIN ITEM
                 int ID, quantity;
                cout<<"Please Enter the Id of shoes who quantity needs to be updated: ";
                cin>>ID;
                //TAKING INPUT OF THAT NEW QUANTITY OF ITEM
                cout<<endl<<"Please Enter the new Quantity: ";
                cin>>quantity;
                 
         
                    for(int i=0; i<CurrentShoes; i++)
                    {
                        if(ShoeId[i]==ID)
                        {
                            QuantityShoes[i]=quantity;    
                        
                        }
                    }
                cout<<endl<<"Quantity Updated Successful! The Inventory is given Below."<<endl;
                
                                
                    int sum=0;
                    int total=0;
                    int Price=0;
                    int i=0;
                    while  ( i<CurrentShoes)
                    {
                        sum=sum+QuantityShoes[i];
                        i++;
                    }
                    i=0;
                    //UPDATING THE PRICE OF ITEM
                    while (i<CurrentShoes)
                    {
                        
                        Price=Price+(QuantityShoes[i]*ShoePrice[i]);
                        i++;
                    }
                    //DISPLAYING THE UPDATED INVENTORY
                    //AFTER UPDATING THE QUANTITY OF AN ITEM
                    cout<<"The Total Number of Shoes: "<< sum<<endl;
                    cout<<"     ShoeId"<<"      ShoeQuantity"<<"        ShoeSize"<<"        PricePerShoe(PKR)"<<endl;
                    i=0;
                    while (i<CurrentShoes)
                    {
                            cout<<"     "<<ShoeId[i]<<"              "<<QuantityShoes[i]<<"                 "<<ShoeSize[i]<<"                   "<<ShoePrice[i]<<endl;
                    i++;
                    }
                    //DISPLAYING THE UPDATE PRICE
                    cout<<"The Total Price Amount of Shoes: "<<Price<<" PKR "<<endl;
                                
                                
                            }
            
            
            else if (input==4)
            {
            	//PRICE UPDATION 
                 int ID, Price1;
                cout<<"Please Enter the Id of shoes who Price needs to be updated: ";
                cin>>ID;
                //TAKING INPUT OF THE NEW PRICE
                cout<<endl<<"Please Enter the new Price(PKR): ";
                cin>>Price1;
          
                               // FINFING THAT ITEM IN THE INVENTORY
                    for(int i=0; i<CurrentShoes; i++)
                    {
                        if(ShoeId[i]==ID)
                        {
                        	//UPDATING PRICE
                            ShoePrice[i]=Price1;    
                        
                        }
                    }
                    //SUCCESSSFULY UPDATED
                cout<<endl<<"Price Updated Successful! The Inventory is given Below."<<endl;
         
                                 int sum=0;
                    int total=0;
                    int Price=0;
                    int i=0;
                    while  ( i<CurrentShoes)
                    {
                        sum=sum+QuantityShoes[i];
                        i++;
                    }
                    i=0;
                    while (i<CurrentShoes)
                    {
                        
                        Price=Price+(QuantityShoes[i]*ShoePrice[i]);
                        i++;
                    }
                    //AGAIN DISPLAYING THE UPDATED INVENTORY
                    cout<<"The Total Number of Shoes: "<< sum<<endl;
                    cout<<"     ShoeId"<<"      ShoeQuantity"<<"        ShoeSize"<<"        PricePerShoe(PKR)"<<endl;
                    i=0;
                    
                    while (i<CurrentShoes)
                    {
                            cout<<"     "<<ShoeId[i]<<"              "<<QuantityShoes[i]<<"                 "<<ShoeSize[i]<<"                   "<<ShoePrice[i]<<endl;
                    i++;
                    }
                    //DISPALYOG THE UODATED TOTAL PRICE 
                    // OF THE INVENTORY
                    cout<<"The Total Price Amount of Shoes: "<<Price<<" PKR "<<endl;
                                
                                
                            }
            
            
            
            
            else if (input==5)
            {  
            // TOTAL AMOUNT AND CURRENT INVENTORY BEING DISPALYED
                 cout<<endl<<"*****CURRENT INVENTORY AND AMOUNT TOTAL(PKR)******"<<endl;
                            
                                 int sum=0;
                    int total=0;
                    int Price=0;
                    int i=0;
                    //UPDATING QUANTITY
                    while  ( i<CurrentShoes)
                    {
                        sum=sum+QuantityShoes[i];
                        i++;
                    }
                    i=0;
                    //UPDATING PRICE
                    while (i<CurrentShoes)
                    {
                        
                        Price=Price+(QuantityShoes[i]*ShoePrice[i]);
                        i++;
                    }
                    //DISPLAYING THE UPDATED 
                    //INVENTORY AFTER BEING UPDATED
                    cout<<"The Total Number of Shoes: "<< sum<<endl;
                    cout<<"     ShoeId"<<"      ShoeQuantity"<<"        ShoeSize"<<"        PricePerShoe(PKR)"<<endl;
                    i=0;
                    while (i<CurrentShoes)
                    {
                            cout<<"     "<<ShoeId[i]<<"              "<<QuantityShoes[i]<<"                 "<<ShoeSize[i]<<"                   "<<ShoePrice[i]<<endl;
                    i++;
                    }
                     //DISPALYOG THE UODATED TOTAL PRICE 
                    // OF THE INVENTORY
                    cout<<"The Total Price Amount of Shoes: "<<Price<<" PKR "<<endl;
                                
                            }
            
            else
            {
                
                // VALIDATION FOR INVALID  INPUT
                while (input>5||input<1)
                {
                    cout<<"Wrong Input! Please ReEnter: ";
                    cin>>input;
                    
                }
                //TAKING AGAIN INPUT
                goto Start;
            }


    }
   // EXITING THE SYSTEM  
    else 
    {
        cout<<endl<<"****EXIT****"<<endl;
    }
    


    return 0;
}


