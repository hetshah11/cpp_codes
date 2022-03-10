#include<iostream>
using namespace std;

class base
	{
		public:
		int x;

		public:
		void setDataForBase(int a)
			{
				x=a;
			}
		int getDataForBase()
			{
				return x;		
			}
	};

class derived : public base
	{
		public:
		int y;
		
		public:

		void setDataForDerived(int a)
			{
				y=a;
			}
		int getDataForDerived()
			{
				return y;
			}
	};

int main()
	{
		base *ptr,ob1;
		derived ob2;

		ptr=&ob2;

		ptr->setDataForBase(5);
		cout << "ans1=" <<ptr->getDataForDerived()<<endl;
		
		ptr->setDataForDerived(10);		
		cout << "ans2=" <<ptr->getDataForDerived()<<endl;
			
		}
