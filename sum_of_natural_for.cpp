//Write a cpp code to implement the sum of natural number by using for loop
#include<iostream>
using namespace std;
int main()
{
    int i, sum=0 ,n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum="<<sum<<"\n";
    cout<<"Thank You...!";
    return 0;
}



