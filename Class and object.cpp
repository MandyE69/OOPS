// Program to create a class and object.

#include<iostream>
using namespace std;
class myclass
{
	public:
		void sayhello()
		{
			cout<<"hello ! We are learning c++";
		}
};
int main()
{
	myclass obj; //class_name object_name
	obj.sayhello(); // accessing member function using object
	return 0;
}
