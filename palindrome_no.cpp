#include<iostream>
using namespace std;
int main()
{
    int rev=0,n,original;
    cout<<"Enter the number:";
    cin>>n;
    original=n;
    while(n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
    cout<<"The reverse number is: "<<rev<<endl;
    if(original==rev)
    {
        cout<<"The given number is palindrome";
    }
    else
    {
         cout<<"The given number is not palindrome.";
    }
    cout<<endl<<"Thank You...!";
    return 0;
}