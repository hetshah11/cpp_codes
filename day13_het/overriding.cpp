//This is C++ programme to demonstrate method overriding

//Edited By: Het Shah



#include<iostream>
using namespace std;

class ABC	//class ABC created
	{
		public:
		int b;
		void display()
			{
				cout << "This is parent class" << endl;
				cout << "b="<<b << endl;
			}
	};		//class ABc ends
class XYZ : public ABC		//class XYZ created(child class of ABC)
	{
		public:
		int d;
		void display()
			{
				cout << "This is child class" << endl;
				cout << "b=" << b << " and " <<"d=" <<d << endl;
			}
	};		//class XYZ ends here

int main()
	{
		ABC obj1;
		XYZ obj2;

		ABC *bptr;
		bptr=&obj1;

		cout << endl <<" Base class pointer assign address of base class object" << endl;

		bptr->b=100;
		bptr->display();

		bptr=&obj2;

		bptr->b=200;
		cout << "Base class pointer assign address of derived class" << endl;

		bptr->display();

		derived *dptr;
		dptr=&obj2;		
	}
