#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the any no."<<endl;
	cin>>n;
	if(n>=0)
	{
		cout<<"You enterd number is Positive";
	}
	else if(n<=0)
	{
		cout<<"You enterd number is Negative";
	}
	else
	{
		cout<<"Invalid number:";
	}
	return 0;
}
