//This C++ programme demonstrates pure virtual function and abstratc class in C++

//Edited BY; Het Shah

#include<iostream>
using namespace std;

class shape		//class shape
	{
		protected:
			float x;
		public:
			void getdata()
				{
					cin >> x;
				}
			// virtual float calculateArea()		//pure virtual function(function without any body)
			// 	{
			// 	} 
		private:		//private method 
			void fun()
				{
					cout << "Hello" << endl;
				}
	};		//class shape ends

class square : public shape		//class square inherited from shape
	{
		public:
		float calculateArea()	//same method name as of base class
			{
				return x*x;
			}
	};
class circle : public shape
	{
		public:
		float calculateArea()		//same method name as of base class
			{
				return 3.14*x*x;
			}	
		
	};
int main()		//main method starts
	{
		shape *ptr;		//pointer to shape class
		square s;		//object of square class
		circle c;		//object of circle class
		ptr=&s;		//ptr pointing to square class object
		cout << "Enter lenghth to calculate the area of a square:" << endl;
		ptr->getdata();	//it will invoke getdata() method in square class

		//ptr->fun();
		cout << "Area of square: " <<ptr->calculateArea() << endl;		//Area of square
		ptr=&c;		////ptr pointing to circle class object
		cout << "Enter radius to calculate the area of a circle: " << endl;
		ptr->getdata();		//it will invoke getdata() method in circle class

		
		cout << "Area of circle: " << ptr->calculateArea() << endl;		////Area of circle
		
	}


//when there is no data in function, then it is called pure virtual function
//A class having at least one pure virtual function is called pure virtual function
//Other concepts are same as normal virtual functions
