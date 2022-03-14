//This C++ programme demonstrates use of exception header file and what() function in that header file for displaying standard Exceptions

//Edited By; Het Shah


#include<iostream>
#include<exception>
using namespace std;

int main()
	{
		try
			{
				int *myarray = new int[199999999999999];	// Very large size provided in array index, so it will throw bad_allocate exception
			}
		catch(exception &e)		
			{
				cout << "Std exception" << e.what() << endl;	//
			}

		try
			{
				int a=0;
				
			}
		return 0;
	}
