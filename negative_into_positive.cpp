// The -ve covert into +ve number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the any no:"<<endl;
    cin>>n;

    if(n<0)
    {
        n=n*(-1);
        cout<<n<<endl;
    }
    cout<<"Thank You";
    return 0;
}