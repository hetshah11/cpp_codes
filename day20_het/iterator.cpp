#include<iostream>
#include<vector>
using namespace std;

int main()
    {
        vector<char> v(10);
        vector<char>::iterator p;

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
        p=v.begin()+1;
        

        while(p!=v.end())
            {
                *p=toupper(*p);
                p++;
            }
        cout << "Modified contents:\n";

        p=v.begin();

        while(p!=v.end())
            {
                cout << *p << " ";
                p++;
            }
    }