// Write a program in C++ to swap two numbers.

#include<iostream>
using namespace std;
int main()
{
	int a,b,Swap;
	cout<<"\tSwap two numbers "<<endl;
	cout<<"------------------------------------"<<endl;
	
	cout<<"\t Before swap "<<endl;
	cout<<"      ----------------"<<endl;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	
	cout<<"\t After Swap "<<endl;
	cout<<"      ----------------"<<endl;
	Swap=a;
	a=b;
	b=Swap;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b;
	
	return 0;
	
}
