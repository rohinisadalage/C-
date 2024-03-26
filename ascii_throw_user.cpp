#include<iostream>
using namespace std;
void Ascii()
{
	char c;
	cout<<"Enter the character:"<<endl;
	cin>>c;
	cout<<"The ASCII value is:"<<c<<static_cast<int>(c)<<endl;
	cout<<"Thank You...";
}
int main()
{
	Ascii();
	return 0;
}
