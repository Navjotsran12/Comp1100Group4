#include <iostream>                                                                                   //navjot
#include <string>
using namespace std;


int prices[13]; // array prices
int totalPrice;//shopping cart
bool programfinished = false; 

void AskToBuy(int choice)
{
    string answer;

    cout<<"Do you wish to buy? (YES/NO)"<<endl;
    cin>>answer;

    if(answer=="yes" || answer=="YES")
    {
        int quantity;
        cout<<"How many? \n"<<endl;
        cin>>quantity;

        totalPrice += prices[choice] * quantity; //1+choice because options on screen are 1,2,3,4 not 0,1,2,3

        cout << "Items added to shopping cart"<<endl<<endl;
        cout << "Total shopping cart:"<<totalPrice<<endl<<endl;
    }
    if (answer=="no" || answer=="NO")
    {
        // quit
    }
}

int GetNumber()
{
     int x;
     cout << "Please enter a number :" << endl<<endl;
     cin>>x;                     
     cout << " The number you picked is :-" << x << endl<<endl;
     return x;
                                                                  
}

void toystypes()
{
   
    cout<<"1.Mip robots"<<endl;
    cout<<"2.Anti cosmo"<<endl;
    cout<<"3.Wowwee Robosapien x"<<endl;
    cout<<"4.Rivier Rc space worrier"<<endl;
  
    
}                                                                      

void industypes()                                                  
{    
    cout<<"1.Cartesian"<<endl;
     cout<<"2.Cylindrical"<<endl;
     cout<<"3.Scara"<<endl;
     cout<<"4.6-Axis"<<endl;
     
}                                                                                                         //navjot

 void socialtypes()                                                                                        //komal
{    
    cout<<"1.Hitch BOT"<<endl;
     cout<<"2.Kismet"<<endl;
     cout<<"3.Joe root"<<endl;
     cout<<"4.Tico"<<endl;
}

void availabletypes()
{
    
    cout<<"Available types are"<<endl;
    cout<<"*******************************"<<endl;
    cout << " 1- Industrial Robots " << endl;
    cout << " 2- Social Robots " << endl;
    cout << " 3- Toys " << endl;
    
}

int checkl2(int t) // t is equal to l2 that was passed in
{
    int offset;

    if(t==1)
    {
        industypes();
        offset = 0;
    }
    if(t==2)
    {
        socialtypes();
        offset = 4; //move 4 spaces forward in price array to use proper prices
    }
    if(t==3)
    {
        toystypes();
        offset = 8;
    }
    if(t>3 || t<1)
    {
          cout<<"Enter valid number"<<endl<<endl;
          availabletypes();
    }

    return offset;
}                                                                                                    // komal

void StartProgram()                                                                                  //   gurpreet
{
    //set prices
prices[1]=5000; //industrial
prices[2]=7500;
prices[3]=6250;
prices[4]=8000;
prices[5]=1000; //social
prices[6]=2000;
prices[7]=1500;
prices[8]=3500;
prices[9]=200; //toys
prices[10]=400;
prices[11]=100;
prices[12]=500;

    int l1,l2,l3;     // first we are showing welcome for the project

    cout << "Welcome. Please select an item:"<<endl;
    cout << "1-Robots"<<endl;
    cout << "2-Phones"<<endl;
    cout<< "3-Laptops"<<endl;

    l1 = GetNumber();       // userNumber and GetNumber are used to give return when function calls
        if (l1==1) 
     {
        cout << "display items" << endl;      //if user will type 1 it displays item for robots for which we further continue
        cout<<"*******************************"<<endl;
        availabletypes();
     }
        else if (l1==2 || l1==3) 
     {
        cout<<"No items left"<<endl;      //if user will type 2 or 3 it didn't display any item
        return;                                
     }
     
     l2=GetNumber();
     int pricearrayoffset = checkl2(l2);        // 't' being returned from checkl2 function provides the offset

     l3=GetNumber();
     while(l3>4 && l3<1)
     {
         cout<<"enter valid number"<<endl;
         l3=GetNumber();  
     }

     l3 += pricearrayoffset;        // add offset to l3 to make switch statement work properly

     switch(l3)
     {
            case 1:
                cout << "cartesian robot price is 5000"<<endl;
                AskToBuy(1);
                break;
            case 2:
                cout << "cylindrical robot price is 7500"<<endl;
                AskToBuy(2);
                break;
            case 3:
                cout << "scara robot price is 6250"<<endl;
                AskToBuy(3);
                break;
            case 4:
                cout << "6-axis robot price is 8000"<<endl;
                AskToBuy(4);
                break;
            case 5:
                cout << "hitch bot price is 1000"<<endl;
                AskToBuy(5);
                break;
            case 6:
                cout << "Kismet robot price is 2000"<<endl;
                AskToBuy(6);
                break;
            case 7:
                cout << "Joe root robot price is 1500"<<endl;
                AskToBuy(7);
                break;
            case 8:
                cout << "Tico robot price is 3500"<<endl;
                AskToBuy(8);
                break;
            case 9:
                cout<<"Mip Robot  price is  $200"<<endl;
                AskToBuy(9);
                break;
            case 10:
                cout<<"anti cosmo price is 400"<<endl;
                AskToBuy(10);
                break;
            case 11:
                cout<<"wowwee robosapien x price is 100"<<endl;
                AskToBuy(11);
                break;
            case 12:
                cout<<"rivier Rc space worrier price is 500"<<endl;
                AskToBuy(12); 
                break;                                                                     //   gurpreet
     }
}

int main()                                                                                    //raman
{
    string startagain;
   while (programfinished==false)
    {
        StartProgram();

        cout << "Your shopping cart value is " << totalPrice << endl;
        cout << "Do you wish to buy more?"<<endl<<endl;
        cin >> startagain;
        if (startagain != "yes")
        {
            programfinished=true;
        }
    }
    
        cout << "Your total cost is "<<totalPrice<<endl;
        cout << "Thank you for buying!"<<endl;

       return 0;                                                                               //raman
}


