#include<iostream>
using namespace std;
void swap()
{
	int a,b,c;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Before swapping the elememts are:"<<a<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"After the swapping the elements are:"<<a<<b<<endl;
	cout<<"Thank You..."<<endl;
}
 
int main()
{
	swap();
	return 0;
} 
