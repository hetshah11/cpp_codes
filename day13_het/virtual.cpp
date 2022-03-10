#include<iostream>
using namespace std;

class Base
	{
		public:

		virtual void show()
			{
				cout << "Base" << endl;
			}
	};

class Derv1 : public Base
	{
		public:
		void show()
			{
				cout << "Derv1" << endl;
			}
	};

class Derv2 : public Base
	{
		public:
		void show()
			{
				cout << "Derv2" << endl;
			}
	};

int main()
	{
		Base b1;
		Derv1 dv1;
		Derv2 dv2;

		Base *ptr;

		ptr=&b1;
		ptr->show();

		ptr=&dv1;
		ptr->show();

		ptr=&dv2;
		ptr->show();
	}
