//Write a cpp code to implement the product of the number using while loop
#include<iostream>
using namespace std;
int main()
{
    int product=1,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(n>0)
    {
        product=product*(n%10);
        n=n/10;
    } 
    cout<<"Product of the give number is: "<<product<<"\n";
    cout<<"Thank You..!";
    return 0;
}