//namespace in C++
//namespace nesting
//Edited By; Het Shah


#include <iostream>
using namespace std;
namespace NS1       //outer namespace
{
    int i;
    namespace NS2   //inner namespace 
    {
        int j;
    }
}
int main()
{
    NS1::i = 19;
    NS1::NS2::j = 10;
    cout << NS1::i << " " << NS1::NS2::j << "\n";
    using namespace NS1;
    cout << i * NS2::j;
    cout << endl;
    return 0;
}
