//Write a cpp code to implement the sum of natural number by using while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1, sum=0 ,n;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Thank You...!";
    return 0;
}