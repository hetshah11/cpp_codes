#include<iostream>
using namespace std;

class A
	{
		public:
		void displayA()
			{
				cout << "class A" << endl;
			}
	};
class B 
	{
		public:
		void displayB()
			{
				cout << "class B" << endl;
			}
	};
class C : public A
	{
		public:
		void displayC()
			{
				cout << "class C" << endl;
			}
	};
class D : public B
	{
		public:
		void displayD()
			{
				cout << "class D" << endl;
			}
	};
class E : public C,public D
	{
		public:
		void displayE()
			{
				cout << "class A" << endl;
			}
	};
class F : public E
	{
		public:
		void displayF()
			{
				cout << "class A" << endl;
			}
	};


int main()
	{
		A a;
		B b;
		C c;
		D d;
		E e;
		F f;

		a.displayA();
		//b.displayA();
		//b.displayC();
		//b.displayD();
		f.displayA();
		f.displayC();
		f.displayB();
		f.displayE();
		e.displayA();
		e.displayB();
		e.displayC();

		return 0;
	}
