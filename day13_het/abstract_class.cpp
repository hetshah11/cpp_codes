//This C++ programme shows abstract class in C++
//Edited by: Het Shah


#include<iostream>										//        convert
using namespace std;							//				      \
									//				l_to_g	f_to_c										
class convert		//class convert
	{
		protected:
		double val1;
		double val2;
		public:
		convert(double i)		//parameterized constructor
			{
				val1=i;
			}
		double getconv()
			{
				return val2;	
			}
		double getinit()
			{
				return val1;
			}
		virtual void compute()		//pure virtual function
			{
			}
	};		//class convert ends

class l_to_g : public convert		//new class inherited from convert
	{
		public:
		
		l_to_g(double i) : convert(i)		//parameterized constructor of convert class is also called
					{
					}

		void compute()
				{
					val2=val1/3.7854;
				}
	};

class f_to_c : public convert		//new class inherited from convert				
	{
		public:
		
		f_to_c(double i) : convert(i)		//parameterized constructor of convert class is also called
			{
			}

		void compute()
			{
				val2=(val1-32)/1.8;
			}
	};

int main()		//main method()
	{
		convert *p;		//pointer of convert class
		l_to_g lgob(4);		//creating object of l_to_g class
		f_to_c fcob(70);	//creating object of f_to_c class


		p=&lgob;	//assigning base pointer to child class 
		cout << p->getinit() << "liters is:";	//accesing base class method
		p->compute();	//accesing l_to_g clas method

		cout << p->getconv() << "Gallon is:";	//accesing base class method
		p=&fcob;	//assigning base pointer to another child class
		cout << p->getinit()<< "In fahernenhit is:";		//accesing base method

		p->compute();		//accesing child class method
		cout << p->getconv() << "celcius " << endl;

		return 0; 
	}
