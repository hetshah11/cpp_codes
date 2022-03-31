//Template specialization
//Edited by: Het Shah

#include<iostream>
using namespace std;

template<typename X>
void swap(X* a , X* b)      //template function
    {
        cout << endl << endl;
        cout << "Inside template swap" << endl;
        cout << "Before swapping: a=" <<*a <<" b= " <<*b << endl;
        X temp;
        temp=*a;
        *a=*b;
        *b=temp;
        cout << "After swapping: a=" <<*a <<" b= " <<*b << endl;

        
    }

    void swap(int* a,int* b)        //non template function
        {
            cout << endl << endl;
            cout << "Inside int specialization" << endl;
            cout << "Before swapping: a=" <<*a <<" b= " <<*b << endl;
            int temp;
            temp=*a;
            *a=*b;
            *b=temp;
            
           
            cout << "After swapping: a=" <<*a <<" b= " <<*b << endl;
        }

    int main()
        {
            char a,b;
            a='A';
            b='B';

            int c=10,d=20;
            swap(&a,&b);
            swap(&c,&d);

            return 0;
        }