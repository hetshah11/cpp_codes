#include<iostream>
#include<exception>
using namespace std;

int main()
	{
		int n1,n2,result;
		cout << "Enter 2 numbers" << endl;
		cin >> n1 >> n2;

		try
			{
				if(n2==0)
					throw n2;
				else
					{
					result=n1/n2;
					cout << "result=" << result<< endl;
					}
			}
		catch(int x)
			{
				cout << "can't divide by" << x << endl;
			}
	}
