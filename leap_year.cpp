#include<iostream>
using namespace std;


int main()
{
    int year;
    cout<<"Enter the Year"<<endl;
    cin>>year;
  cout<<"\n----------------"<<endl;
    if((year % 4==0) && (year % 100 !=0) || (year % 400==0)){
        cout<<year<< " Leap Year"<<endl;
    }
    else{
    cout<<year<< " Not Leap year"<<endl;
    }
  
   return 0;


}