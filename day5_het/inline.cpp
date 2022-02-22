//This C++ programme demonstates inline functions
//Edited By: Het Shah


#include<iostream>
using namespace std;
inline  int cube(int n)
	{				//Inline function
		return n*n*n;
	}
int main()
	{
		int a;
		cout << "Enter value" << endl;
		cin >> a;
		cout << "cube of" << a << " is " << cube(a) << endl; 
	}
