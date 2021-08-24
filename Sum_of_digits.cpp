#include<iostream>
using namespace std;

int main(){
    int x,sum=0;
    cout<<"Enter the digits"<<endl;
    cin>>x;

    do
    {
        sum+=x%10;
        x=x/10;
        
    } while (x!=0);
     cout<<"The digits sum => "<<sum<<endl;
     return 0;
}