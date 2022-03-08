//This C++ programme demonstrates constructor concepts in Inheritence

//Edited By; het Shah



#include<iostream>
using namespace std;

class ABC		//defining class ABC
	{
		int a;
		public:
		ABC()		//default constructor
			{
				cout << "Inside ABC's constructor" << endl;
			}
		~ABC()		//destructor
			{
				cout << "Inside ABC's destructor" << endl;
			}
	};
class XYZ : public ABC		//class XYZ inherited from class ABC
	{
		int x;
		public:
		XYZ()		//class XYZ default constructor
			{
				cout << "Inside XYZ's constructor" << endl;
			}
		XYZ(int k)		//class XYZ parameterized constructor
			{
				k=x;
				cout << "Inside XYZ's parameterized constructor" << endl;
			}
		~XYZ()		//class XYZ destructor
			{
				cout << "Inside XYZ's destructor" << endl;
			}
	};

int main()
	{
		XYZ obj1;	//crearing object of class XYZ
		XYZ obj2(5);	//crearing object of class XYZ

		return 0;
	}

//when we create object of any class, its parent class object is automated created
