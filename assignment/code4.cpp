//Count the number of words that start with 'e'?

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
    {
        fstream file;       //file handler
        //string str;
        char str[15];
        int count=0,i,flag=1;

        try
        {
            file.open("a.txt"); //file opening
            if(file.fail())
                throw 'a';

            
        }
        catch(char ch)
        {
            flag=0;
            cout << "Something went wrong" << endl;
        }


        if(flag==1)
            {
                while(!file.eof())
                {
                    file >> str;        //storing file data in string
                    for(i=0;i<=14;i++)
                        {
                            
                                if(str[strlen(str)-1]=='a')
                                {
                                    count++;
                                    break;
                                }

                            
                            
                        }
                    
                }
                cout << "words ending with s= "<< count << endl;

            }
        
    }