#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
    {
        fstream file;
        string str;
        //char a[15];
        int count=0,i;

        file.open("a.txt");

        while(!file.eof())
            {
                file >> str;
                if(str[0]=='e')
                    count++;
                  
            }
        cout << "words starting eith e= "<< count << endl;
    }