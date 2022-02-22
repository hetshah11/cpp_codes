//This is C++ programme to demonstrate static member functions
//edited by: Het Shah


#include<iostream>
using namespace std;

class shared 		//class shared created
		{
		static int a;	//static variable dedlaration
		int b;
		  public:
			void set(int i, int j)	//function to set values
				 {
				     a=i;
				     b=j;
				  }
			void show();	//function declaratio
		} ;			//class shared ends here
int shared :: a;	//static variable definition
void shared::show()	//function created outside class using scope resolution
		{
			cout << "This is static a: " << a;
			cout << "\nThis is non-static b: " << b; 
			cout << "\n";
		}
	
int main() 	//main method starts
	{
		shared obj1,obj2;		//created 2 objects of class shared
		obj1.set(10, 20);
		obj1.show();
		obj2.set(30, 40);		//Invoking methods
		obj2.show();
		obj1.show();
		return 0;
	}
