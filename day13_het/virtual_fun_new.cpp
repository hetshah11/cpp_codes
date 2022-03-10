#include<iostream>
using namespace std;

class Base
	{
		public:
		virtual void function()
			{
				cout << "Base virtual" << endl;
			}
	};

class derived1 : public Base
	{
		public:
		void function()
			{
				cout << "Deriver virtual" << endl;
			}
	};

class derived2 : public Base
	{
		public:
		 void display()
			{
				cout << "Display" << endl;
			}
	};

int main()
	{
		derived1 d1;
		derived2 d2;
		d2.function();
		return 0;
	}
