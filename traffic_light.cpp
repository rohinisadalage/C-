#include<iostream>
using namespace std;
int main()
{
	char currentColor[10];
	cout<<"Enter the current traffic light color:"<<endl;
	cin>>currentColor;
	if(strcmp(currentColor,"red")==0)
	{
		cout<<"Next color: green"<<endl;
	}
	else if(strcmp(currentColor,"yellow")==0)
	{
		cout<<"Next color: Red"<<endl;
	}
	else if(strcmp(currentColor,"green")==0)
	{
		cout<<"Next color: Yellow"<<endl;
	}
	else
	{
		cout<<"Invalid input!"<<endl;
	}
	return 0;
}

























