//This C++ programme demonstrates function overloading
//Edited by; Het Shah 


#include<iostream>
using namespace std;
class ABC			//class ABC created
	{
		public:
			int input; 
		
			
	};	//class ABC ends here
int sum(int a)			//Here you can see total 7 functions.All functions have same name but number of arguments or order of arguments are diffrent.
	{
		return a+5;
	}
int sum(int a,int b)
	{
		return a+b;
	}

int sum(int a,int b,int c)
	{
		return a+b+c;
	}
double sum(double a,double b,double c)
	{
		return a+b+c;
	}
double sum(int a,double b)
	{
		return a+b;
	}
double sum(double a,int b)
	{
		return a+b;
	}
/*double sum(int a,int b)		//We can't overload function by changing only return type
	{
		return a+b;
	}   */
int sum(ABC obj1,ABC obj2)
	{ 		
		
		return obj1.input + obj2.input;
		
	}
int main()
	{
		ABC obj1,obj2;
		obj1.input=30;
		obj2.input=40;
		cout << "Sum is: " << sum(10)<< endl;			//We are invoking same function by applying diffrent set of arguments.
		cout << "Sum is: " << sum(10,20) << endl;
		cout << "Sum is: " << sum(20,30,40) << endl;
		cout << "Sum is: " << sum(20.0,30.0,30.5) << endl;
		cout << "Sum is: " << sum(20,30.5) << endl;
		cout << "Sum is: " << sum(30.5,20) << endl;
		cout << "Sum is: " << sum(obj1,obj2) << endl;

	}
