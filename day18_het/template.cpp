//This C++ programme demonstartes template
//Edited By; Het Shah


#include<iostream>
using namespace std;

template<typename T>        //Template sybtax
T sum(T n1, T n2)
    {                       //by template, we can use data type in generic
        T rs;
        rs=n1+n2;
        return rs;
    }

    int main()
        {
            int a=10,b=20,c;
            long A=11,B=22,C;

            C=sum(A,B);     //sum of long
            c=sum(a,b);     //sum of int
            //c=sum(A,b);

            cout << "The sum of int: " << c << endl;
            cout << "The sum of long: " << C << endl;
        }
