void StartProgram()                          gurpreet
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
                break;                                gurpreet
     }
}
