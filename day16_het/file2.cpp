//This C++ programme demonstartes how to take input as a string in C++ files
//Edited By; Het Shah



#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		fstream input;		//object created
		string str,str2;

		input.open("data.txt");		//opening a file

		if(!input)
			cout << "file did not open" << endl;

		else
			{
				while(!input.eof())
					{
						input >> str >> str2;		//reading strings from file
						cout << str << '\t' << str2 << endl;
					}
			}
		input.close();		//closing a file
	}
