#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		fstream outfile;
		outfile.open("data2.txt", ios::out);

		outfile << "This is my file";

		long pos = outfile.tellp();
		outfile.seekp(pos+6);
		outfile << "Again my file";

		outfile.close();
		
		cout << "Done!!" << endl;
		return 0; 
	}
