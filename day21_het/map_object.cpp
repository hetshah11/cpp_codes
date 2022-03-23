#include<iostream>
#include<string.h>
#include<map>
using namespace std;

class name
    {
        char str[40];
        public:
        name()
            {
                strcpy(str,"");
            }
        name(char *s)
            {
                strcpy(str,s);
            }
        char *get()
            {
                return str;
            }

    };

class phoneNo
    {
        char str[80];
        public:
        phoneNo()
            {
                strcpy(str,"");
            }
        phoneNo(char *s)
            {
                strcpy(str,s);
            }
        char *get()
            {
                return str;
            }

    };

int main()
    {
        map<name,phoneNo>directory;

        directory.insert(pair<name,phoneNo>(name("Emp1"),phoneNo("555-1111")));
        directory.insert(pair<name,phoneNo>(name("Emp2"),phoneNo("555-2222")));
        directory.insert(pair<name,phoneNo>(name("Emp3"),phoneNo("555-3333")));
        directory.insert(pair<name,phoneNo>(name("Emp4"),phoneNo("555-4444")));

        char str[80];
        cout << "Enter name:";
        cin >>str;
        map<name,phoneNo>::iterator p;
        p=directory.find(name(str));
        if(p!=directory.end())
            cout << "phone number:" << p->second.get();
        else    
            cout << "Name is not in directory" << endl;

        return 0;
    }
