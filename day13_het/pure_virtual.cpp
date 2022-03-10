#include<iostream>
using namespace std;

class shape
	{
		protected:
			float x;
		public:
			void getdata()
				{
					cin >> x;
				}
			virtual float calculateArea()
				{
				} 
		private:
			void fun()
				{
					cout << "Hello" << endl;
				}
	};

class square : public shape
	{
		public:
		float calculateArea()
			{
				return x*x;
			}
	};
class circle : public shape
	{
		public:
		float calculateArea()
			{
				return 3.14*x*x;
			}	
		
	};
int main()
	{
		shape *ptr;
		square s;
		circle c;
		ptr=&s;
		cout << "Enter lenghth to calculate the area of a square:" << endl;
		ptr->getdata();

		//ptr->fun();
		cout << "Area of square: " <<ptr->calculateArea() << endl;
		ptr=&c;
		cout << "Enter radius to calculate the area of a circle: " << endl;
		ptr->getdata();

		
		cout << "Area of circle: " << ptr->calculateArea() << endl;
		
	}
