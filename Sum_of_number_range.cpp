#include<iostream>
using namespace std;



int main()
{
    int upper_limit, sum = 0, lower_limit;
    cout<<"Enter lower limit"<<endl;
    cin>>lower_limit;
    cout<<"Enter upper limit"<<endl;
    cin>>upper_limit;

     for(int i=lower_limit;i<=upper_limit;i++){
         
         sum +=i;

       cout<<sum<<endl;

     }

     cout<<"The sum of natural number ("<<lower_limit<<") to (" <<upper_limit <<" )" <<sum;

}
