#include<iostream>
using namespace std;
class Measure                     //creating Measure class
	{
	     public:                                     //declaring 3 public float type variables
		float height,length,width;

	     void setInput(float a,float b,float c)      //defining 3 public functions
			{
				height=a;
				length=b;
				width=c;
			}
		 float area()
			{
				return length*width;
			}
		 float volume()
			{
				return length*width*height;
			}

	};                // measure class ends here

int main() 				//main method starts here
	{
		Measure obj1;		//creating 2 objects of Measure class
		Measure obj2;

		obj1.setInput(10,20,30);	//invoking methods
		obj2.setInput(40,50,60);

		cout << "Input for object 1 " << "height=" << obj1.height << "width=" << obj1.width << "length=" << obj1.length << endl;
		cout << "area of object 1=" << obj1.area() << endl;
		cout << "volume of object 1 =" << obj1.volume() << endl;

		cout << "Input for object 2 " << "height=" << obj2.height<< "width=" << obj2.width << "length=" << obj2.length << endl;
		cout << "area of object 2=" << obj2.area()<< endl;
		cout << "volume of object 2 =" << obj2.volume()<< endl;

		return 0;
	}
