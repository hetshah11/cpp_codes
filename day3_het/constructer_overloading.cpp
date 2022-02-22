//This is C++ programme for constructor overloading
//Edited by: Het shah

#include<iostream>
using namespace std;

class rectangle       //rectangle class created
	{
		int length, width;    //private members of rectangle class
	   public:
		rectangle()
			{ // Default constructor
				length=0;
				width=0;
				cout << "default constructor called" << endl << "length= "<< length << " width= " << width << endl;
			}
		rectangle(int x, int y)
			{// Parameterized constructor


				length = x;
				width = y;
				cout << "parameterized constructor called" << endl << "length= "<< length << " width= " << width << endl;
			}
		rectangle(rectangle &_r)
			{//copy constructor
		 
				length = _r.length;
				width = _r.width;
				cout << "copy constructor called" << endl << "length= "<< length << " width= " << width << endl;
			}
	};  //rectangle class ends here
int main()
	{
		rectangle r1; // Invokes default constructor
		rectangle r2(10,20); // Invokes parameterized constructor
		rectangle r3(r2); // Invokes copy constructor
	}	
