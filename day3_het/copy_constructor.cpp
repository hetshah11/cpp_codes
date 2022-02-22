//This is C++ programme to demonstrate copy constructor
//Edited by: Het Shah

#include<iostream>
using namespace std;

class demo			//demo class starts here
	{
		int m, n;	//private members
		 public:
			demo(int x,int y)	//default constructor
				{
					m=x;
					n=y;
					cout<<"Parameterized Constructor" << endl;
				}
			demo(demo &x)		//copy constructor
				{
					m = x.m;
					n = x.n;
					cout<<"Copy Constructor" << endl;
				}
	};		// demo class ends
int main()
	{
		demo obj1(2,4);  //normal constructor invoked 
		demo obj2(obj1);	//copy constructor invoked
		//demo obj2 = obj1;
	}
