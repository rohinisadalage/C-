#include<iostream>
using namespace std;
int sum(int num1, int num2)
{
    int num3=num1+num2;
    return num3;
}
int diff(int num1, int num2)
{
    int num3=num1-num2;
    return num3;
}
int pro(int num1, int num2)
{
    int num3=num2*num1;
    return num3;
}
int divi(int num1, int num2)
{
    int num3=num2/num1;
    return num3;
}
int mod(int num1, int num2)
{
    int num3=num2%num1;
    return num3;
}
int main()
{
    cout<<"\nAddition :"<<sum(10,2);
    cout<<"\nSubtraction :"<<diff(10,2);
    cout<<"\nMultiplication :"<<pro(10,2);
    cout<<"\nDivision :"<<divi(10,2);
    cout<<"\nModulo division :"<<mod(10,2);
    return 0;
}