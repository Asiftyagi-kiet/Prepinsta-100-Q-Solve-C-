#include<iostream>
using namespace std;


int main()
{
    int sum, a,i;
    cout<<"Enter the number:"<<endl;
    cin>>a;
     cout<<"Number list-"<<endl;
     for(i=1;i<=a;i++)
     {
         cout<<i<<endl;
     }


    sum = a*(a+1)/2;
    cout<<"The sum of first ("<<a<<") Natural number is = "<<sum<<endl;
}