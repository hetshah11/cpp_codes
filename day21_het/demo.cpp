#include<iostream>
using namespace std;

class ABC
    {
        public:
        ABC()
            {
                cout << "Hello" << endl;
            }
    };
int main()
    {
        ABC a;
        ABC();
        return 0;
    }