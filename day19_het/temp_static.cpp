//template use in static variable
//Edited By; het shah

#include <iostream>
using namespace std;

template <class T>
void fun()
{
    static T i=10;
    //cout << "Enter i" << endl;
    //cin >> i;
    cout << "value of i is: " << ++i << endl;
}

int main()
{
    fun<int>();
    fun<int>();
    fun<double>();
    return 0;
}