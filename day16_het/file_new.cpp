#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		ifstream input;
		string str;
		input.open("data.txt");

		if(!input)
			cout << "file did not open" << endl;

		/*else
			{
				while(!input.eof())
					{
						input >> str;
						cout << str << " ";	
					}
			}*/
		else
			{
				while(getline(input,str))
					{
						cout << str << endl;
					}
			}
	}

/*#include <iostream>
#include <fstream>
using namespace std;



int main()
{
fstream file;
string str;



file.open("data.txt");



if(!file)
cout << "File did not open" << endl;
else
{
while(!file.eof())
{
file >> str;
cout << str << " ";
}
}
return 0;
}*/
