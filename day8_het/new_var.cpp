//This C++ programmed demonstrates pointer fundamentals
//Edited By:Het SHah


#include<iostream>
using namespace std;

int main()
	{
		int *ptr=new int;		//creating pointer
		*ptr=45;	//store value in block addressed by pointer 
		//int a=3;

		cout<<"value of pointer: "<< ptr << endl;		//value of pointer
		cout<<"value of data addressed by pointer"<< *ptr << endl;	//value of address addressed by pointer
		cout<<"Size of value: "<< sizeof(*ptr) << endl;		
		cout<<"Size of pointer: "<< sizeof(ptr);

		delete ptr;		//deleting pointer(rather we can say deleting link between pointer and address pointed by it)
	}
