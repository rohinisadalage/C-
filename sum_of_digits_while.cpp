//Write a cpp code to implement the sum of digits by using while loop
#include<iostream>
using namespace std;
int main()
{
    int  sum=0 ,n;
    cout<<"Enter the value of n:";
    cin>>n;
    while(n>0)
    {
       sum=sum+n%10;
       n=n/10;
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Thank You...!";
    return 0;
}