#include<iostream>
using namespace std;
class Dress{
	        int size;
	        string name,color;
	        float price;
public: Dress(){
	         size=40;
	         name="Anarkali";
	         color="Pink";
	         price=500.0;
             }	   
public: void displayInfo()
{
cout<<size<<endl;
cout<<name<<endl;
cout<<color<<endl;
cout<<price<<endl;
}			     
};
int main()
{
	Dress d1;
	d1.displayInfo();
	return 0;
}
