//This C++ programme demonstartes constructor and destructor
//Edited by; Het Shah

#include<iostream>
using namespace std;
class Marks		//class Marks created
	{
		int maths,science;		//private members
	   public:
		Marks()
			{				//constructor
				maths=60;
				science=70;
				cout << "Marks of maths is " << maths << " and " << "marks of science is " << science << endl;
			}
		~Marks()				
			{						//Destructor
				cout << "Objects destroyed" << endl;
				cout << "destructor called" << endl;
			}
	};	//class Marks ends
int main()		//main method starts 
	{
		Marks m;		//created object of Marks class 
		return 0;
	}
