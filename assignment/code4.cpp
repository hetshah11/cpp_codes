#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
    {
        fstream file;
        //string str;
        char str[15];
        int count=0,i;

        file.open("a.txt");

        while(!file.eof())
            {
                file >> str;
                for(i=0;i<=14;i++)
                    {
                        
                            if(str[strlen(str)-1]=='a')
                            {
                                count++;
                                break;
                            }

                        
                        
                    }
                  
            }
        cout << "words with having a= "<< count << endl;
    }