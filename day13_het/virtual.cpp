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
		Derv dv1;
		Derv dv2;

		Base *ptr;
		ptr=&dv1;
		ptr->show();
	}
