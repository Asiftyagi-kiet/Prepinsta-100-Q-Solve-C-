#include<iostream>
using namespace std;

int main(){
    int num, rem, reverse=0;
    cout<<"Enter the the number"<<endl;
    cin>>num;

do
{
    rem=num%10;
    reverse = reverse*10+rem;
    num = num/10;

} while (num!=0);

 cout<<"The reverse number => "<<reverse<<endl;
}