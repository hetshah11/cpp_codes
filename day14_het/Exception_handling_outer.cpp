#include<iostream>
using namespace std;

int main()
	{
		int a=1;
		try
			{
				try
					{
						throw a;
					}
				catch(int x)
					{
						cout << "Exceptiomn in inner try-catch block" << endl;
						if(a==1)
							throw a;
					}

			}
		catch(char x)
			{
				cout << "Exception in outer try-catch block" << endl;
			}
	}
