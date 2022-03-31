//sorting list using list container
//Edited By; Het Shah

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst1, lst2;
    list<int>::iterator p;

    for (int i = 0; i < 10; i = i + 2)
    {
        lst1.push_back(rand() % 20);
    }

    for (int i = 1; i < 11; i = i + 2)
    {
        lst2.push_back(rand() % 20);
    }

    cout << "Conetens of lst1: ";
    p = lst1.begin();
    while (p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    cout << "Conetens of lst2: ";
    p = lst2.begin();
    while (p != lst2.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // cout << "sorted list1: ";
    // lst1.sort();
    // p = lst1.begin();
    // while (p != lst1.end())
    // {
    //     cout << *p << " ";
    //     p++;
    // }

    // cout << "\nsorted list2: ";
    // lst2.sort();
    // p = lst2.begin();
    // while (p != lst2.end())
    // {
    //     cout << *p << " ";
    //     p++;
    // }
    cout << endl;

    lst1.merge(lst2);

    if(lst2.empty())
        cout << "lst2 is now empty\n";
    cout << "contents of lst1 after merge:\n";
    
    p=lst1.begin();
    while(p!=lst1.end())
        {
            cout << *p << " ";
            p++;
        }

    return 0;
}

//after merging it is also sorting 2 lists