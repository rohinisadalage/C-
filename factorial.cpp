#include<iostream>
using namespace std;
int main()
{
    int fact=1,n;
    cout<<"Enter the value of those whose you have factorial: ";
    cin>>n;
    while(n>=1)
    {
        fact=fact*n;
        n=n-1;
    }
    cout<<"The factorial of the given number is: "<<fact;
    cout<<endl<<"Thenk you..!";
    return 0;
}