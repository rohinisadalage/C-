#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter the character:"<<endl;
	cin>>c;
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		cout<<"You entered right Alphabet:"<<c<<endl;
	}
	else
	{
		cout<<" You not entered Alphabet:"<<c<<endl;
	}
	return 0;
}
