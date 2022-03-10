//Write a programme to make any privae function/variable public in main method by using keyword
//Edited By; het Shah


#include<iostream>
using namespace std;

class base		//base class created
	{
		int i;		//private variable

		public:	
		int j,k;

		void setI(int x)
			{
				i=x;
			}
		int getI()
			{
				return i;
			}
		
	};		//base class ends here
class derived : private base		//derived class inherited from base class privately
	{
		public:

		using base :: j;		//making j public
		using base :: setI;		//making setI() public
		using base :: getI;		//making getI() public
		int a;
	};		//class derived ends here

int main()		//main() method starts
	{
		derived ob;
		
		//ob.i=10		//illegal
		ob.j=20;		//legal
		ob.a=40;		//legal
		//ob.k=50;		//Illegal
		ob.setI(5);		//legal
		cout << "Value of i= " << ob.getI() << endl;		//legal
	}	
