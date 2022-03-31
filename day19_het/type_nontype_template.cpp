//Non type templates
//Edited by: Het shah


#include<iostream>
using namespace std;

template<typename T,int N>  
class mySequence
    {
        T memblock[N];

        public:
        void setMember(int,T);
        T getMember(int);

    };
template<typename T,int N>
void mySequence<T,N> :: setMember(int x,T value)
    {
        memblock[x]=value;
    }
template<typename T,int N>
T mySequence<T,N> :: getMember(int x)
    {
        return memblock[x];
    }

int main()
    {
        mySequence<int,5>myints;
        mySequence<double,5>myfloats;

        myints.setMember(0,100);
        myfloats.setMember(3,3.14);
        cout <<myints.getMember(0) << endl;
        cout << myfloats.getMember(3) << endl;

        return 0;
    }