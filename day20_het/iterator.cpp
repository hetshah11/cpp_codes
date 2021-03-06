//Iterator in vector
//Edited By; Het Shah

#include<iostream>
#include<vector>
using namespace std;

int main()
    {
        vector<char> v(10);
        vector<char>::iterator p;   //creating iterator

        int i;
        p=v.begin();
        i=0;
        while(p!=v.end())
            {
                *p=i+'a';
                p++;
                i++;
            }

        cout << "original contents:\n";
        p=v.begin()+1;
        
        v.insert(p,'z');
        p=v.begin()+2;
        v.insert(p,'z');
        p=v.begin()+3;
        v.insert(p,'z');

        p=v.begin();
        while(p!=v.end())
            {
                cout << *p << " ";
                p++;
            }
        p=v.begin();
        p++;
        v.erase(p);

        p=v.begin();
        

        while(p!=v.end())
            {
                *p=toupper(*p);
                p++;
            }
        cout << "\nModified contents:\n";

        p=v.begin();

        while(p!=v.end())
            {
                cout << *p << " ";
                p++;
            }

        v.clear();

        cout << "\nModified contents:\n";

        

        p=v.begin();

        while(p!=v.end())
            {
                cout << *p << " ";
                p++;
            }
    }