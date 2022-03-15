#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		ifstream input;
		string str;
		input.open("data.txt");
		int count=0;
		
		if(!input)
			cout << "file did not open" << endl;

		
		else
			{
				while(getline(input,str))
					{
						cout << str << endl;
						count++;
					}
				cout << "Number of lines: " <<count << endl;
			}
	}


