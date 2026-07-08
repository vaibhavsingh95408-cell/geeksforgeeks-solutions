#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"ENTER THE NUMBER :- ";
    cin>>i;
     for (int j=1;j<=i;j++)
     {
        if (i%j==0)
        {
            cout<<j<<" ";
        }
     }
}