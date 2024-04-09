//Write a c++ code to print the ncr
#include<iostream>
using namespace std;
int main()
{
    int n,r,nfact=1,rfact=1,nrfact=1;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    for(int i=2; i<=n; i++)
    {
        nfact=nfact*i;
    }
    for(int i=2; i<=r; i++)
    {
        rfact=rfact*i;
    }
    for(int i=2; i<=n-r; i++)
    {
        nrfact=nrfact*i;
    }
    int ncr=nfact/rfact*(nrfact);
    cout<<ncr;
    return 0;
}