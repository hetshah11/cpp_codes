

//Count the number of time the word 'the' is present in the file? 


#include<iostream>
#include<fstream>
using namespace std;

int main()
    {
       fstream file;        //file handler
       string str;
       int count=0,flag=1;
        
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
                            if(str=="the")
                            count++;
                        } 
                cout << "No of the =" << count << endl;

            }    
       
        return 0; 
    }
