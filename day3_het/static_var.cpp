//This is C++ programme to demonstrate static variable
//Edited by: Het Shah

#include<iostream>
using namespace std;



class item		//class item created
	{
		int number;	
		static int count;// static variable declaration
		public:
		void getdata(int a)
			{			//function to return data
				number = a;
				count++;
			}	
		void getcount()
			{		//function to count
				cout<<"\nvalue of count: \n"<<count;
			}
	};	//class item ends here
int item :: count; // static variable definition

int main()		//main method starts here
	{
		item i1,i2,i3;		//3 objects created of item class 
		i1.getdata(100);	
		i1.getcount();
		
		i2.getdata(200);	//getdata() and getcount() method invokations
		i2.getcount();

		i1.getdata(300);
		i3.getcount();
		
	}
