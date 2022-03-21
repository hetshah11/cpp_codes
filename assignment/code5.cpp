// Write a cpp program that shows a menu: 
// 1: enter student detail 2: find student 
// If the user selects 1: then it will ask for some details like: ID, student name, branch, Location. Save all these information in the file. Each student's details will be stored in one line. 
// If the user selects 2: ask for the ID from the user that is needed to be searched. Then look for this id in the file (database). If it is available then return all the information about the particular student. If the ID is not available, then print some error message. 
// H OH 
// Note: Make sure to use exception handling concepts here and think of what could go wrong and put proper try-throw-catch setup in place.

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class student       //student class
{
public:
    int id;
    char name[20],branch[20],loc[20];
    

    void addData()      //function for adding data into file
    {
        student st;
        int flag1=1;
        cout << "Enter the id: ";
        cin >> st.id;
        cin.ignore();       //clear stdin
        cout << "Enter name: ";
        cin.getline(st.name, 20);   //take 1 line as input
        cout << "Enter branch: ";
        cin.getline(st.branch, 20);
        cout << "Enter location: ";
        cin.getline(st.loc,20);

        fstream file;

        try
        {
            file.open("student.dat", ios::in | ios::app | ios::out);        //opening/creating stdent.dat file
            if(file.fail())
                throw 'a';
        }
        catch(char ch)
        {
            flag1 =0;
            cout << "Something went wrong" << endl;
        }
        
        if(flag1==1)
        {
            file.write((char *)&st, sizeof(st));        //writing into file
            file.close();       //closing file
            cout << "Data added sucessfully into student.dat file" << endl;
        }
        

        
    }

    void findData()         //function for finding data
    {
        student st;
        fstream file;
        int id;
        int flag=0;
        int flag1=1;
        cout << "Enter id: ";
        cin >> id;
        try
        {
            file.open("student.dat", ios::in | ios::app | ios::out);        //opening/creating stdent.dat file
            if(file.fail())
                throw 'a';
        }
        catch(char ch)
        {
            flag1 =0;
            cout << "Something went wrong" << endl;
        }
        
        if(flag1==1)
        {
            cout << "Search result: " << endl;

            while(!file.eof())
            {
                file.read((char *)&st, sizeof(st));     //reading from file
                if (id == st.id)
                {
                    cout << "Id: " << st.id << "     name: " << st.name << "      branch: " << st.branch << "      location: " << st.loc << endl;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout << "Error: Data Not found" << endl;
        

            file.close();
         }
            
     }

        

    void displayData()
    {
        fstream file;
        student st;
        int flag1=1;


        try
        {
            file.open("student.dat", ios::in | ios::binary);
            if(file.fail())
                throw 'a';    
        }
        catch(char ch)
        {
            flag1=0;
            cout << "Something went wrong" << endl;
        }
        
        
        if(flag1==1)
        {
            cout << "All student data is: " << endl;
            while(file.read((char *)&st, sizeof(st)))       //reading from file until we reach end of file
            {
                cout << "Id: " << st.id << "     name: " << st.name << "      branch: " << st.branch << "      location: " << st.loc << endl;
            }
            
            file.close();       //cloding file

        }
        
    }
};

int main()
{
    student st;
    int ch;

    while(ch!=4)
    {

        cout << endl <<"Press 1 for add data" << endl;
        cout << "Press 2 for find data" << endl;
        cout << "Press 3 for display all data" << endl;
        cout << "Press 4 for exit" << endl;
        cin >> ch;

        if (ch == 1)
        {
            st.addData();
        }
        else if (ch == 2)
        {
            st.findData();
        }
        else if (ch == 3)
        {
            st.displayData();
        }
    }

    return 0;
}