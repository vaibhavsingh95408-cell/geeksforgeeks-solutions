#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"ENETR THE NUMBER :- ";
    cin>>i;
    int number = i;
    int x;
    int arm;
    int armstrong=0;

    while(i!=0)
    {
        //extracting
        x=i%10;

        //logic
        arm=x*x*x;
        armstrong=armstrong+arm;
        
        

        //changing number 
        i=i/10;


    }
    
    if (number==armstrong)
    {
        cout<<"NUMBER IS ARMSTRONG";
    }
    else
    {
        cout<<"NUMBER IS NOT ARMSTRONG";

    }

}
