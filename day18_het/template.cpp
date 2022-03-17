#include<iostream>
using namespace std;

template<typename T>
T sum(T n1, T n2)
    {
        T rs;
        rs=n1+n2;
        return rs;
    }

    int main()
        {
            int a=10,b=20,c;
            long A=11,B=22,C;

            C=sum(A,B);
            c=sum(a,b);

            cout << "The sum of int: " << c << endl;
            cout << "The sum of long: " << C << endl;
        }
