#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the no. "<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}