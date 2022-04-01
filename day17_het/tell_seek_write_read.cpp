//seekp() in file management
//Edited by: Het Shah

#include<iostream>
#include<fstream>
using namespace std;

int main()
	{
		fstream outfile;
		outfile.open("data2.txt", ios::out);

		outfile << "This is my file";

		long pos = outfile.tellp();
		outfile.seekp(pos-2);
		outfile << "Again my file";

		outfile.seekp(0,ios::beg);
		outfile << "Het SHah";
		outfile.close();
		
		cout << "Done!!" << endl;
		return 0; 
	}
