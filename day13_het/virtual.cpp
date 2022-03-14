//This C++ programme demonstrates virtual function and its uses in C++
//Edited BY; Het Shah


#include<iostream>
using namespace std;

class Base		//base class
	{
		public:

		virtual void show()
			{
				cout << "Base" << endl;
			}
	};

class Derv1 : public Base		//Derv1 class derived from base class
	{
		public:
		void show()
			{
				cout << "Derv1" << endl;
			}
	};

class Derv2 : public Base		//Derv2 class derived from base class
	{
		public:
		void show()
			{
				cout << "Derv2" << endl;
			}
	};	

int main()
	{
		Base b1;  //creating object of base class
		Derv1 dv1;	//creating object of derv1 class
		Derv2 dv2;	//creating object of derv2 class

		Base *ptr;	//creating pointer to base class object

		ptr=&b1;		//assigning memory to pointer
		ptr->show();	//It will call show() function from base class

		ptr=&dv1;	//assigning base class pointer to Derv1 class object
		ptr->show();	//It will call show() function from derv1 class

		ptr=&dv2;		//assigning base class pointer to Derv2 class object
		ptr->show();		//It will call show() function from derv2 class
	}


//By base class pointer, we can point to base class object, as well as derived class object.
//If there are same function names in base and derived class , then we should make that function virtual in base class
//After that we can access either base class function or derived class function by assigning pointer to diffrent objects(base or derived)
