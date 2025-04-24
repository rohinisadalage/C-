//Write a cpp code to implement the product of the number using do while loop
#include<iostream>
using namespace std;
int main()
{
    int product=1,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    do
    {
      product=product* (n%10);
      n=n/10;
    }while(n>0);
    cout<<"Product of the give number is: "<<product<<endl;
    cout<<"Thank You..!";
    return 0;
}