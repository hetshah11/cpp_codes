#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		fstream input;
		
			

		input.open("file.txt");
		int count=0;		
		char ch;
	
		if(!input)
			cout << "file did not open" << endl;

		else
			{
				while(!input.eof())
					{
						input.get(ch);
						if(ch==32)
						count++;
					}
			}
		input.close();
		
		cout << "Total whitespace " << count << endl;
	}
