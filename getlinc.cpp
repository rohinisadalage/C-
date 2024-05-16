#include<iostream>
int main()
{
using namespace std;
const int Arsize=20;
char name[Arsize];
char dessert[Arsize];
cout<<"Enter Your name:\n";
cin.getline(name,Arsize);
cout<<"Enter Your favourite dessert:\n";
cin.getline(dessert,Arsize);
cout<<"I have some dellisious "<<dessert;
cout<<" for you, "<<name<<".\n";
return 0;
}

