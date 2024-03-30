//Write a c++ program to count the no. of digits present in number
#include<iostream>
using namespace std;
int main()
{
    int count=0,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<"count is:"<<count<<endl;
    cout<<"Thank You...";
    return 0;
}