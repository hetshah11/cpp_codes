#include<iostream>
using namespace std;

template<class T>
void multiply(T num1,T num2)
    {
        cout << "Result: " << num1*num2 << endl;
    }

int main()
    {
        int a=10,b=20;
        double x=2.2,y=2.5;

        multiply(a,b);
        multiply(x,y);
        multiply(a,x);

        return 0;
    }