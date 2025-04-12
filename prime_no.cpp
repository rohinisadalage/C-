#include<iostream>
using namespace std;
int main()
{
    int n,j=1,count=0;
    cout<<"Enter the number:";
    cin>>n;
    while(j<=n)
    {
        if(n%j==0)
        {
            count++;
        }
        j++;
    }
    if(count==2)
    {
        cout<<"The number is prime no.";
    }
    else
    {
        cout<<"The number is not prime no.";
    }
    cout<<endl<<"Thank You..!";
    return 0;
}