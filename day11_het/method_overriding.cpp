//This is C++ programme to demonstrate method overriding

//Edited By: Het Shah



#include<iostream>
using namespace std;

class ABC	//class ABC created
	{
		public:
		void display()
			{
				cout << "This is parent class" << endl;
			}
	};		//class ABc ends
class XYZ : public ABC		//class XYZ created(child class of ABC)
	{
		public:
		void display()
			{
				cout << "This is child class" << endl;
			}
	};		//class XYZ ends here

int main()
	{
		XYZ x;		//creating object of class XYZ
		x.display();		//when there is same method name in parent and child class, then using child class object, it will invoke child class method only
					//for invoking parent class method, we should use scope resolution operator
		x.ABC :: display();		//method overriding(calling parent class method using scope resolution)

		return 0;
	}		//main() ends here
