#include<iostream>
using namespace std;

template <typename T>
class display
    {
        public:
        display()
            {
                static T i=15.5;
                cout << "value of i is: " << ++i << endl; 
            }
    };

    int main()
        {
            display<int> ob1;
            display<int> ob3;
            display<long> ob2;
            display<long> ob4;

            

            return 0;


        }