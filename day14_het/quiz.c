#include<iostream>
using namespace std;

class A
	{
		void displayA()
			{
				cout << "class A" << endl;
			}
	}
class B 
	{
		void displayB()
			{
				cout << "class B" << endl;
			}
	}
class C : public A
	{
		void displayC()
			{
				cout << "class C" << endl;
			}
	}
class D : public B
	{
		void displayA()
			{
				cout << "class D" << endl;
			}
	}
class E : public C,public D
	{
		void displayA()
			{
				cout << "class A" << endl;
			}
	}
class A
	{
		void displayA()
			{
				cout << "class A" << endl;
			}
	}
