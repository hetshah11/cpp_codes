//This is C++ programme to demonstrate constructors
//Edited by: Het Shah


#include<iostream>
using namespace std;

class Rectangle		//Rectangle class created
	{
		int width;		//privare members
		int height;
	   public:
		Rectangle()
			{				//constructor
				width=5;
				height=6;
				cout<<"Constructor Called";
			}
	};	//Reactangle class ends here
int main()
{
Rectangle r1;	//Object of rectangle created
return 0;
}
