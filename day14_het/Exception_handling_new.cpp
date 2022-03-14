//This C++ programme demonstrates Exception handling in C++

//Edited By; Het Shah



#include<iostream>
#include<exception>
using namespace std;

int main()
	{
		int n1,n2;
		float divi;
		cout << "Enter 2 numbers" << endl;
		cin >> n1 >> n2;

		try		//try block
			{
				if(n2!=n1)
					{
						 divi= (float)n1/n2;
						if(divi < 0)
							throw 'e';		//throwing char
						else
							throw 4.5;		//throwing double
						//cout << "n1/n2=" << div;
					}
				else if(n1==n2) 
				  throw n2;
				  
			}		//catching int
		catch(int x)
			{
				cout << "Numerator and denomenator are same" << endl;
				cout << "Result is 1" << endl;
			}
		catch(char st)		//catching char
			{
				cout << "Either Numerator or denominator is negative" << endl;
				cout << "Division is" << divi << endl;
			}
		catch(...)		//default catch block
			{
				cout << "Exception Not found" << endl;
				cout << "Division is" << divi << endl;
			}
			

		return 0;
	}
