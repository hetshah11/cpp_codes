//This C++ programme demonstrates Exception handling on C++
//Edited BY: Het Shah


#include<iostream>
#include<exception>
using namespace std;

int main()
	{
		int n1,n2,result;
		cout << "Enter 2 numbers" << endl;
		cin >> n1 >> n2;

		try		//try block
			{
				if(n2==0)
					throw n2;		//throwing n2
				else
					{
					result=n1/n2;
					cout << "result=" << result<< endl;
					}
			}
		catch(int x)		//catching int thrown by try block
			{
				cout << "can't divide by" << x << endl;
			}
	}

//If some piece of code is lokely to throw some run time error, it is better to write it in try block, and if it cause some kinf of run time errors then it is thrown by try block and caught by catch block
//catch block will have appropriate code to deal with it.
