#include<iostream>
using namespace std;

template<typename T,typename U>
void swap(T *a,U *b)
    {
        //W c=2.5;
        //V temp;
        U temp=*a;
        *a=*b;
        *b=temp;

    }

int main()
    {
        int a=10;
        float b=20.5;
        cout << "Before swapping: a=" <<a <<" b= " <<b << endl;
        swap(&a,&b);
        cout << "After swapping: a=" <<a <<" b= " <<b << endl;

        return 0;

    }
