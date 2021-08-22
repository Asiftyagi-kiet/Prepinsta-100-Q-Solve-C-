#include<iostream>
using namespace std;

int main()
{
    int a,i,x=0;
    cout<<"Enter the Number"<<endl; 
    cin>>a;
  for(i=1;i<=a;i++)
  {
      if(a%i==0)
      {
        x++;
      }
  }

   if(x==2)
   {
       cout<<"Prime number"<<endl;
   }
   else{
       cout<<"Not Prime Number"<<endl;
   }
   return 0;

}