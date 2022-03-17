#include<iostream>
#include<fstream>
using namespace std;

int main()
    {
       fstream file;
       string str;
       int count=0;

        file.open("the.txt");
        while(!file.eof())
            {
                file >> str;
                if(str=="the")
                    count++;
            } 
        cout << "No of the =" << count << endl;
        return 0; 
    }
