// C++ program to show the example of function overloading with Different number of argument.

#include <iostream>
using namespace std;

int mul(int x,int y)
{
	cout<<"mutiplication ="<<x*y<<endl; // endl= line break 
}

int mul(int x,int y,int z)
{
    cout<<"multiplication ="<<x*y*z;
}
int main()
{
	mul(5,5);
	mul(3,4,5);
}
