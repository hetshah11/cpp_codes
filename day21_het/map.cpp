//map in stl
//Edited By; Het shah

#include<iostream>
#include<map>
using namespace std;

int main()
    {
        map <char,int> m;
        int i;

        for(i=0;i<26;i++)
            {
                m.insert(pair<char,int>('A'+i,65+i));   //inserting data into map
            }
        char ch;
        cout << "Enter key(an upper case):";
        cin >> ch;
        map<char,int>::iterator p;

        p=m.find(ch);
        if(p==m.end())
            cout << "Key not in map\n";
        else  
            cout << "It's ASCII value is " << p->second; 
            

            return 0;
    }