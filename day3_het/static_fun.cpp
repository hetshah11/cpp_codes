//This is C++ programme to demonstrate static member functions
//edited by: Het Shah


#include<iostream>
using namespace std;


class item	//class item created
	{
		int number;
		static int count;// static variable declaration
		public:
			void getdata(int a)
				{
					number = a;		//function to retrive data
					count++;
				}
			static void getcount()		//function to count
				{
					cout<< "value of count: " << count << endl;
				}
	};		//class item ends here
int item :: count; // static variable definition



int main()	//main method starts
	{
		item obj1,obj2,obj3;		//creating 3 objects of class item

		obj1.getdata(10);
		item::getcount();	//invoking static method

		obj2.getdata(20);	
		item::getcount();	//invoking static method

		obj3.getdata(30);
		item::getcount();	//invoking static method
		return 0;
	}
