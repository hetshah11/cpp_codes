#include<iostream>
using namespace std;

class ABC
	{

		void fun1()
			{
				cout << "This is private function of outer class"<< endl;
			}

		public:
		
		void fun2()
			{
				cout << "This is public function of outer class" << endl;
				
			}

		

		class XYZ
			{
				void fun3()
					{	
					 
					cout << "This is private function of inner class"<< endl;
					}

				public:
				void fun4()
					{
						cout << "This is public function of inner class" << endl;
					}

				void check1()
					{	
						ABC ob;
						ob.fun2();
						cout << "inner class can access public member of outer class" << endl;
					}
				void check2()
					{
						ABC ob;
						ob.fun1();
						cout << "inner class can access private member of outer class" << endl;
					}

				
			
				

			};

				/*void check3()
					{	
						XYZ ob1;
						ob1.fun3();
						cout << "outer class can access private member of inner class" << endl;
					} */
				void check4()
					{
						XYZ ob1;
						ob1.fun4();
						cout << "outer class can access public member of inner class" << endl;
					}
		
		
			
	};

int main()
		{
			ABC a;
			ABC :: XYZ x;

			//x.fun2();
			//x.fun4();
			//a.fun4();

			x.check1();
			x.check2();
			//a.check3();
			a.check4();



			//x.fun2();
			//a.fun4();

			return 0;

			
		}
