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
		square s;
		circle c;
		cout << "Enter lenghth to calculate the area of a square:" << endl;
		s.getdata();
		cout << "Enter radius to calculate the area of a circle: ";
		c.getdata();
		cout << "Area of circle: " << c.calculateArea();
	}
