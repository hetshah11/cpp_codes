#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main()
    {
        char str[]="I Love C++ programming";
        vector<char> v,v1(20);

        int i;
        for(i=0;i<strlen(str);i++)
            {
                v.push_back(str[i]);
            }
        cout << "Input sequence:\n";
        cout << v.size();
        for(i=0;i<v.size();i++)
            {
                cout << v[i];
            }
            cout << endl;

        //remove_copy(v.begin(),v.end(),v1.begin(),' ');
          replace_copy(v.begin(),v.end(),v1.begin(),' ',':');
        cout << "Result after removing spaces:\n";
        cout << v1.size() << endl;
        for(i=0;i<v1.size();i++)
            {
                cout << v1[i];
            }
        cout << endl << endl;
    }