//Write a cpp code to print the perimeter of rectangle
#include<iostream>
using namespace std;
int main()
{
	float width, length, perimeter;
	cout << "\nPlease Enter the Width of a Rectangle  =  ";
	cin >> width;
	cout << "\nPlease Enter the Length of a Rectangle =  ";
	cin >> length;
	perimeter = 2 * (length + width);
	cout << "\nPerimeter of a Rectangle =  " << perimeter;
 	return 0;
}
