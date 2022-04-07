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
		derived ob2,*ptr2;

		ptr=&ob1;

		ptr->setDataForBase(5);
		cout << "ans1=" <<ptr->getDataForBase()<<endl;

		((derived*)ptr)->setDataForBase(5);
		cout << "ans1=" <<((derived*)ptr)->getDataForBase()<<endl;
		
		
		//ptr->setDataForDerived(10);				//Error		
		//cout << "ans2=" << ptr->getDataForDerived()<<endl;	//Error

		//ptr2=&ob1;		//Error
		


		return 0;
			
		}
