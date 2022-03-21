//Count the number of words that has 'a' in them?

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
    {
        fstream file;       //file handeler
        
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
                        file >> str;    //storing file data into string
                        for(i=0;i<=strlen(str);i++)
                            {
                                
                                    if(str[i]=='a')
                                    {
                                        count++;
                                        break;
                                    }

                                
                                
                            }
                        
                    }
                cout << "words with having a= "<< count << endl;

            }
        
    }