#include<iostream>
#include<fstream>
using namespace st;

int main()
	{
		char line[100];
		fstream file;
	
		file.open("data.txt",ios::out|ios::app);

		if(file.fail())
			cout << "File did not open" << endl;

		else
			{
				cout <<"Name" << endl;
			
				cin.getline(line,100);

				file << line << endl;
				cout << "Age" << endl;
				cin.getline(line,100);
		
				file << line << endl;

				cout << "File updated" << endl;
			}
		return 0;
	}
