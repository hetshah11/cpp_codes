//This C++ programme demonstrates nested Exception handling in C++.
//Edited By; Het Shah 


#include<iostream>
#include<exception>
using namespace std;

int main()
	{
	    try{
	
		try
		  {
			if(a==1)
				throw a;
			else if(a==2)
				throw 'A';
			else if(a==3)
				throw 4.5;
			
		  }

		catch(int a)
			{
				cout << "a=1" << endl;
			}
		catch(char ch)
			{
				cout << "a=2" << endl;
			}
		catch(double d)
			{
				cout << "a=3" << endl;
			}

		}
		catch()
			{
				
			}

		return 0;
		
	}
