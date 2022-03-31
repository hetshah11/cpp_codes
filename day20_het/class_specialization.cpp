//class specialization
//Edited By; Het shah


#include <iostream>
using namespace std;
template <typename T>
class Test                  //generic class
{
    T data;
public:
    Test(T a)
    {
        cout << "Hello, I am object made with template" << endl;
        data=a;
    }

    T getValue()
        {
            return data;
        }
};

template <>         //specialized class
class Test<char>
{
    char data;
public:
    Test(char a)
    {
        cout << "Hello, I am object made with speciialized class" << endl;
        data=a;
    }
    
    char getValue()
        {
            return data; 
        }
};

int main()
{
    Test<char> ob1('A');
    Test<double> ob2(3.14);
    Test<int> ob3(10);
    cout << endl << endl;
    cout <<"value of private member of ob1="<< ob1.getValue() << endl;
    cout <<"value of private member of ob2="<< ob2.getValue() << endl;
    cout <<"value of private member of ob3="<< ob3.getValue() << endl;
    return 0;
}
