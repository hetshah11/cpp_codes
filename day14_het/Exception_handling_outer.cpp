//This C++ programme shows how to use nested try catch.

//Edited By; Het Shah


#include<iostream>
using namespace std;

int main()
	{
		int a=1;
		try			//outer try block
			{
				try		//inner try block
					{
						throw a;	//inner try throws
					}
				catch(int x)		//inner cctch catches in tthrown by inner try 
					{
						cout << "Exceptiomn in inner try-catch block" << endl;
						if(a==1)
							throw a;	//inner catch throes towards outer catch
					}

			}
		catch(char x)		//outer throw catches int thrown by inner catch
			{
				cout << "Exception in outer try-catch block" << endl;
			}
	}

//We can nest try catch block
//Values thrown by inner catch block are caught by outer catch block
