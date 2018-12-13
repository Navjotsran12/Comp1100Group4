void socialtypes()               
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
}                                             