#include<iostream>
using namespace std;

void prime(int x)
{
    int div=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            div++;
        }
    }
    if(div==2){
        cout<<x<<endl;
    }
}



int main()
{
 int lowerlimit,hightlimit;     
 cout<<"Enter the range"<<endl;
 cin>>lowerlimit>>hightlimit;

 cout<<"prime number between"<<lowerlimit<< " to "<< hightlimit<<endl;

 for(int i=lowerlimit;i<=hightlimit;i++){
     prime(i);
 }



}

