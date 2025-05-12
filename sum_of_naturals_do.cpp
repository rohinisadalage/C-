//Write a cpp code to implement the sum of natural number by using Do-while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1, sum=0 ,n;
    cout<<"Enter the value of n:";
    cin>>n;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<"Sum="<<sum<<"\n";
    cout<<"Thank You...!";
    return 0;
}