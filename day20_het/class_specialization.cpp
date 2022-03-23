
#include <iostream>
using namespace std;
template <class T>
class Test
{
public:
Test(T x)
{
cout << "General template object \n" << x << " is not a valid character\n" << endl;
}
};

template <>
class Test<char>
{
public:
Test(char x)
{
cout << "Specialized template object \n" << x << " is a valid character\n" << endl;
}
};

int main()
{
Test<char> ob1('A');
Test<double> ob2(2.3);
Test<int> ob3(3);
return 0;
}

