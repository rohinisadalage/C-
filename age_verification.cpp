//WAP C++ Code to print the what age is for child, teenager, adult.

#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age:"<<endl;
	cin>>age;
	if(age>18)
	{
		cout<<"User is adult"<<endl;
	}
	else if(age>=13 && age<=17)
	{
		cout<<"User is teenager"<<endl;
	}
	else
	{
		cout<<"User is child"<<endl;
	}
	
	return 0;
}
