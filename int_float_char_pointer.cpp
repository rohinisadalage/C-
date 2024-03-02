#include<iostream>
using namespace std;
int main()
{
	//for ineger datatype
	int a=25;
	int *ptr;
	ptr =&a;
	cout<<"This is the value and address for integer datatye"<<endl;
	cout<<a<<endl;  
	cout<<ptr<<endl;         	
	cout<<*ptr<<endl;  
	
	//for float datatype
	float b=25.9;
	float *ptr1;
	ptr1 =&b;
	cout<<"This is the value and address for float datatye"<<endl;
	cout<<b<<endl;  
	cout<<ptr1<<endl;         	
	cout<<*ptr1<<endl;    
	
	//for char datatype
	char c='K';
	char *ptr2;
	ptr2 =&c;
	cout<<"This is the value and address for character datatye"<<endl;
	cout<<c<<endl;  
	cout<<ptr2<<endl;         	
	cout<<*ptr2<<endl;   
	    	         	
	return 0;
}

