#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		fstream input;
		
			

		input.open("data.txt");
		int count=0;
		string str;		
	
		if(!input)
			cout << "file did not open" << endl;

		else
			{
				while(!input.eof())
					{
						input >> str;
						//input >> str >> str2;
						//cout << str << '\t' << str2 << endl;
						count++;
					}
			}
		input.close();
		
		cout << "Total words: " << count << endl;
	}
