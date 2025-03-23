//W.a.cpp.code to implement the addtion, substraction, multiplication and division of the two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first Number: ";
    cin>>a;
    cout<<"Enter the second Number: ";
    cin>>b;
    c=a+b;
    cout<<"Addtion of those number is: "<<c<<endl;

     c=a-b;
    cout<<"Substraction of those number is: "<<c<<endl;

    c=a*b;
    cout<<"Multiplication of those number is: "<<c<<endl;

    c=a%b;
    cout<<"Division of those number is: "<<c<<endl;
    cout<<"Thank You...!";
    return 0;
}