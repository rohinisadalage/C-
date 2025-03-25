//w.a.cpp.code to print the disount on the purchasing amount
#include <iostream>
using namespace std;
int main()
{
    float product_amount,discount;
    cout<<"Enter the Purchasing Product amount: ";
    cin>>product_amount;
    discount =(product_amount * 10 ) / 100;
    cout<<endl<<"Purchasing amount: "<<product_amount;
    cout<<endl<<"Discount is: "<<discount;
    cout<<endl<<"Net Payment is: "<<product_amount-discount<<endl;
    cout<<"Thank You...!";
    return 0;
}