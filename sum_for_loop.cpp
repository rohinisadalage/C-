#include<iostream>
using namespace std;
int main()
{
	int sum=0, i,n;
	cout<<"Enter the any no. you want to make addition of those no."<<endl;
	cin>>n;
	for(i=0; i<=n; i++)
	{
		sum=sum+i;
	}
	cout<<"Sum is:"<<sum<<endl;
	cout<<"Thank You...";
	return 0;
}
