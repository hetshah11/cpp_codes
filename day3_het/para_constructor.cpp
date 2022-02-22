//This C++ programme demonstrates parameterized type constructor
//edited by: Het Shah

#include<iostream>
using namespace std;

class distance1		//Creating distance1 class
	{
		int feet;	//private members
		int inch;
	    public:
		distance1(int x,int y)	//parameterized constructor
			{ 			
				feet=x;
				inch=y;
				cout<<"Constructor Called" << endl << " feet= " << feet << " inches= " << inch << endl ;
			}
	};   //distance1 ends here
int main()		//main method starts here
	{
		distance1 d1(5,6);		//invoking parameterized constructor
		return 0;
	}
