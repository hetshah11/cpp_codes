//This is C++ programme to demonstrate multilevel inheritence

//Edited By : Het Shah


#include<iostream>
using namespace std;
	  /*person
	     |
	   doctor
	     |
	  dentist*/





class person		//defining person class
	{
		int age,weight; //private attributes

		public:
					
		void funperson()	//funperson() method
			{
				cout << "Hello, I am person" << endl;
			}
	};	//person class ends 

class doctor : public person	//doctor class inherited from person
	{
		public:
		void surgery()		//surgery() method
			{
				cout << "Doctor is doing surgery" << endl;
			}
	};	//doctor class ends here
class dentist : public doctor	//dentist class inherited from doctor
	{
		public:
		void rct()		//rct() method
			{
				cout << "Dentist is doing rct treatment" << endl;
			}
	};		//dentist class ends here

int main()		//main() method starts
	{	
		dentist d1;	//creating object of dintist
		doctor doc1;	//creating 
		doc1.funperson(); //Invoking method of parent class
		d1.rct();	//Invoking method 
		d1.surgery();	//Invoking method of parent class
		d1.funperson();	//Invoking method of grandparent class

		return 0;
	}	//main method ends

