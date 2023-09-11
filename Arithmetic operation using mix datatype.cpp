// Write a program in C++ to display various type of arithmetic operation using mixed data type.

#include<iostream>
#include<iomanip>         // iomanip is IO Manipulators. (formatting floating-point numbers with 1 decimal place)
using namespace std;
int main()
{
	int i1,i2;
	double d1,d2;
	
	cout<<"Enter a Integer number :\n";
	cin>> i1 >> i2;
	cout<<"Enter a Decimal number :\n";
	cin>> d1 >> d2;
	
	cout << "\n\n Display arithmetic operations using mixed data type :\n";
	cout << "---------------------------------------------------------\n";
	cout << fixed << setprecision(1);  
 
	cout <<" "<< i1 << " + " << i2 << " = " << i1+i2 << endl;  
	cout <<" "<< d1 << " + " << d2 << " = " << d1+d2 << endl;  
	cout <<" "<< i1 << " + " << d2 << " = " << i1+d2 << endl<<endl;  
	
	cout <<" "<< i1 << " - " << i2 << " = " << i1-i2 << endl;  
	cout <<" "<< d1 << " - " << d2 << " = " << d1-d2 << endl;  
	cout <<" "<< i1 << " - " << d2 << " = " << i1-d2 << endl<<endl;  
	
	cout <<" "<< i1 << " * " << i2 << " = " << i1*i2 << endl; 
	cout <<" "<< d1 << " * " << d2 << " = " << d1*d2 << endl;  
	cout <<" "<< i1 << " * " << d2 << " = " << i1*d2 << endl<<endl;  
	
	cout <<" "<< i1 << " / " << i2 << " = " << i1/i2 << endl;  
	cout <<" "<< d1 << " / " << d2 << " = " << d1/d2 << endl;  
	cout <<" "<< i1 << " / " << d2 << " = " << i1/d2 << endl<<endl;  
	cout << endl;
	return 0;
}


