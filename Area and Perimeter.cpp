// Write a program in C++ to find the Area and Perimeter of a Rectangle.

#include<iostream>
using namespace std;
int main()
{
	int l,b;
	cout<<" Enter Length = ";
	cin>>l;
	cout<<" Enter Breadth = ";
	cin>>b;
	
	cout << "-----------------------------\n";
	
	cout<<" Area of rectangle = "<< l*b << endl;
	cout<<" Perimeter of Recrangle = "<< 2*(l+b);
	return 0;
}
