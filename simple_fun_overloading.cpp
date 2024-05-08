#include<iostream>
using namespace std;

class A
{
    int a=20,b=30;
    public:
           void add()
           {
            int sum=a+b;
            cout<<"Addition is :"<<sum<<endl;
           }
           void add(int c,int d)
           {
            int sub=c-d;
            cout<<"Substraction is :" <<sub<<endl;
           }
};
int main()
{
    A a;
    a.add();
    a.add(50,20);
    return 0;
}