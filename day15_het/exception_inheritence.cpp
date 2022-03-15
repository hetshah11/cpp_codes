


#include<iostream>
#include<exception>
using namespace std;

class Base{};		//empty base class

class Derived : public Base{};	//empty derived class

int main()
	{
		try
			{
				throw Base();		//throwing base object
				//throw Derived();
			}
		catch(Derived)	//catching derived object
			{
				cout << "Derived object caught" << endl;	
			}
		catch(Base)		//catching base object
			{
				cout << "Base object caught" << endl;
			}
		/*catch(Derived d)
			{
				cout << "Derived object caught" << endl;	
			} */
		return 0;
	}



//when we throw an object of a base class , then it can be only caught by base class typr catch block
//while, we throw an object of derived class, then it can be caught either by base class or by derived class(whichever is first in programme)
