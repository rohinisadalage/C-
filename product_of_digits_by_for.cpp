//Write a cpp code to implement the product of the number using for loop
#include<iostream>
using namespace std;
int main()
{
    int product=1,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(; n>0; n=n/10)

        product=product* (n%10);
    
    cout<<"Product of the give number is: "<<product;
    return 0;
}