//overloading 'new' and 'delete' as well as new[] and delete[] operator operator

//Edited By: Het Shah

#include<iostream>
using namespace std;
class location		//class location starts
	{
		int lon,lat;		//private members
		public:
		location()		//default constructor
			{
				lon=0;
				lat=0;
				cout <<"default constructor called"<< endl;
			}
		location(int a,int b)		//parameterized constructor
			{
				lon=a;
				lat=b;
				cout <<"parameterized constructor called"<< endl;
			}
		void display()		//display() function 
			{
				cout<< "coordinates are:"<<endl<<"longitude: "<<lon<<endl<<" Latitude are: "<<lat<<endl;
			}
				
		void *operator new(size_t byte)			//new operator overloading
			{
	
				void *ptr;
				cout << "Inside overloaded new"<< endl;
				ptr= malloc(byte);		//dynamic memory allocation to ptr
				if(ptr==NULL)
					{
						cout<< "Could not allocate memory"<< endl;
						return NULL;
					}
				return ptr;		//returning ptr
			}

		void operator delete(void *ptr)		//overloading delete operator
			{
				cout << "Inside overloaded delete" << endl;
				free(ptr);		//releasing memory
			}
	};		//class location ends here

class demo		//class demo starts here
	{
		int a,b;
		public:
		demo()						//default constructor
			{
				cout << "Inside demo's constructor" << endl;
			}
		void display()
			{
				cout << "Demo object's value are: "<<a << " and "<< b << endl;
			}

		void* operator new[](size_t byte)		//new[] operator overloading
			{
				void *ptr;
				cout << "Inside overloaded new[]"<< endl;
				ptr= malloc(byte);		//dynamically memory allocating
				return ptr;
			}

		void operator delete[](void *ptr)		//overloading delete[] keyword
			{
				cout << "Inside overloaded delete[]"<<endl;
				free(ptr);			//releasing memory
			}
	};
int main()
	{				//main method starts here
			location l1,l2(10,5);		//creating 2 objects of location
			l2.display();
			//demo *d1;
			location *loc = new location(2,2);		//using overloaded new operator
			loc->display();
			delete loc;				//overloaded delete operator

			//int *pt = new int;
			demo *pt2 = new demo[2];		//overloaded new[] operator

			delete[] pt2;		//overloaded delete[] operator

			//location *loc2 = new location[2];
	}
