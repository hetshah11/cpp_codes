#include<iostream>
using namespace std;

class base1
	{
		protected:
		int i;

		public:

			base1(int x)
				{
					i=x;
					cout << "Constructing base1" << endl;
				}
			~base1()
				{
					cout << "Sestructing base1" << endl;
				}
	};

class base2
	{
		protected:
		int k;

		public:
		base2(int x)
			{
				k=x;
				cout << "constructing base2" << endl;
			}
		~base2()
			{
				cout << "Sestructing base2" << endl;
			}
	};

class derived : public base1,public base2
	{
		int j=10;
		public:
		/*derived(int x,int y,int z) : base1(y),base2(z)
			{
				j=x;
				cout << "Constructing derived" << endl;
			}*/
		derived() : base1(3),base2(4)
			{
			
				//j=x;
				cout << "Constructing derived" << endl;
			
			}

		~derived()
			{
				cout << "destructing derived" << endl;
			}

		void show()
			{
				cout << i << " " << j<< " " << k << endl;
			}
	};


int main()
	{
			derived ob;

			ob.show();
			return 0;
	}
