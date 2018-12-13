int main()        
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

       return 0;      
}