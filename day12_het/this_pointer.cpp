#include<iostream>
using namespace std;

class sample
	{
		int a,b;

		public:

		void input(int a,int b)
			{
				this->a=a+b;
				this->b=a-b;
			}
		void output()
			{
				cout << "a= " <<a << endl;
				cout << "b= " <<b << endl;
			}
	};

int main()
	{
		sample ob1;
		ob1.input(3,4);
		ob1.output();
	}
