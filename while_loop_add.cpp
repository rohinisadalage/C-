//Write a c program to print the addtion of sequence numbers using while loop

#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;
	cout<<"Enter the any no. you want to make the addition of those numbers:"<<endl;
	cin>>n;
	
	i=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"Sum is:"<<sum<<endl;
	cout<<"Thank You...";
	return 0;
}
