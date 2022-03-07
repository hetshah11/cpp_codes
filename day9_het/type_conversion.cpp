//basic type to class type conversion

#include<iostream>
using namespace std;

class Time
	{
		int hour,min;

		public:
			Time()
				{
					cout << "Default construcor" << endl;
				}
			Time(int x)
				{
					cout << "Inside the time parameterized constructor" << endl;
					hour = x/60;
					min =x%60;		
				}
			void display()
				{
					cout << "Hour: " << hour << " min: " << min  << endl;
				}





//overloading::
		void operator=(int x
			{
				cout << "Inside overloaded: " << endl;
			}
	};

int main()
	{
		int x=90;
		Time T1;
		T1=x;
		T1.display();
	}
