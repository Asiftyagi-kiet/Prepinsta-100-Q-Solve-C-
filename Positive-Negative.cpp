#include<iostream>
using namespace std;


int main()
{
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    if(a<0){
     
     cout<<"Negative Number!!"<<endl;
    }
    else if(a==0)
    {
        cout<<"Zero!!!"<<endl;
    }
    else{
        cout<<"Positive number!!"<<endl;    
     }
     return 0;
}