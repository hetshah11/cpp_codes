//template use in static variable
//Edited By; Het Shah

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
            display<int> ob1;       //new copy created of var
            display<int> ob3;       //old copy is used
            display<long> ob2;      //new copy created of var
            display<long> ob4;      //old copy is used

            

            return 0;


        }