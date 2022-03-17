#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
    {
        fstream file;
        
        char str[15];
        int count=0,i;

        file.open("a.txt");

        while(!file.eof())
            {
                file >> str;
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