#include<iostream>
using namespace std;

template<typename T1>
void sum(T1 a,T1 b,T1 c)
    {
        cout << "Sum: " << a+b+c << endl;
    }

template<typename T1,typename T2>
void sum(T1 a,T2 b,T1 c)
    {
        cout << "Sum: " << a+b+c << endl;
    }

void sum(int a,int b)
    {
        cout << "Sum: " << a+b << endl;
    }

int main()
    {
        int a=2,b=3;
        float x=3.5,y=4.5,z=7.5;
        sum(a,b);
        sum(x,y,z);
        sum(x,a,z);
        sum(a,x,b);
    }