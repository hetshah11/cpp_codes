//Count the number of words that start with 'e'?

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
    {
        fstream file;       //file handler
        string str;
        //char a[15];
        int count=0,i,flag=1;

        try
        {
            file.open("a.txt"); //file opening
            if(file.fail())
                throw 'a';

            
        }
        catch(char ch)
        {
            flag=1;
            cout << "Something went wrong" << endl;
        }

        if(flag==1)
            {
                while(!file.eof())
                {
                    file >> str;        //storing file data into string
                    if(str[0]=='e')
                        count++;
                    
                }
                cout << "words starting eith e= "<< count << endl;

            }

        
    }