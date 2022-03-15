#include<iostream>
#include<fstream>
using namespace std;


int main()
{
fstream fin,fout;

fin.open("data.txt");
fout.open("data1.txt");

string str;

while(!fin.eof())
	{
		//fin.get(ch);
		//fout.put(ch);
		
		fin << str;
		fout >> str; 
	}

cout << "Copy done!" << endl;
fin.close();
fout.close();

return 0;
}
