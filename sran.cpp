#include <iostream>                    
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
     
}                                       