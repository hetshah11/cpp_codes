//This C++ programme demonstartes how to use throw keyword outside try block

//Edited By; het Shah 


#include<iostream>
using namespace std;

void Xtest(int test)
	{
		cout <<"Inside Xtest, test is: " << test << endl;
		
		if(test)
		 throw test;			//throw outside try block
	}

int main()
	{
		cout << "Start" << endl;
		try			//try block
		{
			cout << "Inside try block" << endl;
			Xtest(0);
			Xtest(1);
			Xtest(2);		//Here, Xtest(1) function throws integer text,So catch block will be executed, But after that, control will be at after block, so Xtest(2) won't be executed
		}
		catch(int i)		//catch block
		{
			cout << "Caught an exception--value is:";
			cout << i << endl;
		}
		return 0;
	}
