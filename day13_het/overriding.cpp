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
		ABC obj1;		//object of class ABC
		XYZ obj2;		//object of class XYZ

		ABC *bptr;		//pointer of class ABC
		bptr=&obj1;		//base class pointer pointing to object of base class

		cout << endl <<" Base class pointer assign address of base class object" << endl;

		bptr->b=100;	
		bptr->display();	//display() from base class

		bptr=&obj2;		//base class pointer pointing to object of derived class

		bptr->b=200;
		cout << "Base class pointer assign address of derived class" << endl;

		bptr->display();		//

		derived *dptr;
		dptr=&obj2;		
	}
