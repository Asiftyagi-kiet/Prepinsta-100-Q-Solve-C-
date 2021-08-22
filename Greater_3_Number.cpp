#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the first number:-"<<endl;
    cin>>a;
    cout<<"Enter the second number:- "<<endl;
    cin>>b;
    cout<<"Enter the third number:- "<<endl;
    cin>>c;

    //logic------------
cout<<"-----------------------------"<<endl;
    if((a>b)  && (a>c)){
        cout<<"First number is greater"<<endl;

    }   
    else if((b>c) && (b>a)){
        cout<<"Second number is greater"<<endl;
    }
    else{
        cout<<"Third number is greater"<<endl;
    }
  
   return 0;
   
}