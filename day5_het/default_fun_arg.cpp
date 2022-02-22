//This C++ programme demonstates default function arguments
//Edited By : Het Shah

#include<iostream>
using namespace std;
int volume(int length,int width=10,int height=20)
	{								//Here we haven't assigned value to int length;					
		return length*width*height;
	}
/*int volume(int length=5,int width,int height=20)````			//This is invalid
	{
		return length*width*height;
	} */
/*int volume(int length=5,int width=10,int height)			//This is Invalid
	{
		return length*width*height;
	}*/
/*int volume(int length=5,int width=10,int height=20)			//This is valid
	{
		return length*width*height;
	} */
int main()		//main method starts here
	{
		//cout << "Volume is " << volume() << endl;
		cout << "Volume is " << volume(5) << endl;		//Invoking same methods by diffrent sets of arguments
		cout << "Volume is " << volume(5,6) << endl;
		cout << "Volume is " << volume(20,30,40) << endl;
	}
