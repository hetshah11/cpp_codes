#include <iostream>
#include <deque>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void showdq(deque<int> g)

{

    deque<int>::iterator t;

    for (t = g.begin(); t != g.end(); ++t)

    {

        cout << *t << "\t";
    }

    cout << endl;
}

int main()

{

    int n, s;

    cout << "enter size of dequeue and size of subset" << endl;

    cin >> n >> s;

    int arr1[n];

    deque<int> q;

    for (int i = 0; i < n; i++)

    {

        int a;

        cin >> a;

        arr1[i] = a;

        q.push_back(a);
    }

    // showdq(q);

    int arr[n - s][s];

    int arr2[n - s][s];

    int p = 0;

    int min = INT_MAX, max = INT_MIN;

    // int Min, Max;
    for (int i = 0; i <n - s; i++)

    {

        cout << "[";

        for (int j = 0; j < s; j++)

        {

            arr[i][j] = arr1[p];

            p++;

            cout << arr[i][j] << ",";

            if (arr[i][j] < min)

                min = arr[i][j];

            if (arr[i][j] > max)

                max = arr[i][j];
        }

        cout << "]";

        // // for(int i=0; i<s; i++)
        // // {
        // for(int j=0; j<s; j++)
        // {
        // // cout<<arr[i][j]<<" ";

        // if (arr[i][j] >= arr[0][0])
        // {
        // Max = arr[i][j];
        // }
        // if (arr[i][j] <= arr[0][0])
        // {
        // Min = arr[i][j];
        // }
        // // }

        // cout<<"["<<Min<<","<<Max<<"]";
        cout << "[" << min << "," << max << "]";

        p = p - s + 1;

        // p=p+1;
        cout << endl;
    }
}
