//This C++ program demonstrares nested class and exception handling though nested class

//Edited By; Het Shah



#include<iostream>
using namespace std;
class Test		//class Test starts here
	{
		int x;
		public:
		
		void read()		
			{
				cout << "Enter a number=";
				cin>>x;
			}
	
		class EVEN		//Abstract class
			{
			};
		class ODD		//Abstract class
			{
			};


		void check()
			{
				if(x%2==0)
					throw EVEN();		//Throwing object through constructor
				else
					throw ODD();		//Throwing object through constructor
			}
			
	};		//class Test ends here

int main()		//main() method starts here
	{
		Test t;		//creating object of Test class	
		t.read();

		try		//try block
		{
			t.check();	
		}
		catch(Test :: EVEN)			//catching object by scope resolution
			{
				cout << "Number is Even" << endl;
			}
		catch(Test :: ODD)			//catching object by scope resolution
			{
				cout << "Number is Odd" << endl;
			}
		return 0;
	}


//We can also create object of class by calling class constructor-----as per line no 31
