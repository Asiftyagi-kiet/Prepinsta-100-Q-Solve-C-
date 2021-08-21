#include<iostream>
using namespace std;

int main()
{
   int a, b,x;
   cout<<"Enter the first number:"<<endl;
   cin>>a;
   cout<<"Enter the second number: "<<endl;
   cin>>b;

  if(a==b){
      cout<<"Both are equal"<<endl;
  }
  else if (a<b)
  {
      cout<<"Second number is greater"<<endl;
  }
  else{
      cout<<"First number is greater"<<endl;
  }

return 0;



}