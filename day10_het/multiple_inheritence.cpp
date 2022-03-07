//This is C++ programme to demonstrate multilple inheritence

// Edited By : Het Shah


#include<iostream>
using namespace std;

class liquid		//defining liquid class
	{
		//int age,weight;

		public:

		void liquidfun()	//liquidfun() method		
			{
				cout << "Hello, I am liquid" << endl;
			}
	};		//class liquid ends here

class fuel		//defining class fuel
	{
		public:
		void fuelfun()		//fuelfun() method
			{
				cout << "Hello, I am fuel" << endl;
			}
	};		//class fuel ends here
class petrol : public liquid,public fuel		//class petrol inherited form both liquid and fuel class
	{
		public:
		void petrolfun()	//petrolfun() method
			{
				cout << "Hello, I am petrol" << endl;
			}
	};	//petrol class neds here

int main()		//main method ends here
	{
		petrol p1;		//creating object of petrol class
		p1.petrolfun();		//Invoking class method 
		p1.fuelfun();		//Invoking parent class method from child class object
		p1.liquidfun();		//Invoking parent class method from child class object
		

		//when we inherit any class from its child class, object of parent class is automaticaly created.
		return 0;
	}		//main method ends here

