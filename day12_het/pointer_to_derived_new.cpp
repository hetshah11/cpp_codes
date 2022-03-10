#include<iostream>
using namespace std;

class base
	{
		public:
		int b;
		void show()
			{
				cout <<"b= " <<b << endl; 
			}
	};

class derived : public base
	{	
		public:
		int d;
		void show()
			{
				cout << "b= " << b << " and d= " << d << endl;
			}
	};

int main()
	{
		base b1,*bptr;
		derived d1,*dptr;
		bptr=&b1;
		cout <<"Base class pointer assign address of base class object" << endl;
		bptr->b=100;
		bptr->show();

		bptr= &d1;

		bptr->b=200;
		cout << "Base class address assign address of derived class object" << endl;
		bptr->show();

		dptr = &d1;
		cout << "Derived class object assign address of derived class object" << endl;

		dptr->d=300;
		dptr->show();

		return 0;

		
	}

