#include<iostream>
using namespace std;
#include<deque>


int main()
    {
        int N,S;
        cout <<"Enter queue size: ";
        cin >> N;
        cout <<"Enter S:";
        cin >>S;

        int temp=N-S+1;

        struct ar
        {

            int array[3];

        }index[temp];

        int a,i,j;
        deque<int> deq;
        for(i=0;i<N;i++)
            {
                cout<<"Enter value:";
                cin>>a;
                deq.push_back(a);
            }
        // for(i=0;i<N-2;i++)
        //     {
        //         struct ar index[i]; 
        //     }
        for(i=0;i<temp;i++)
            {
                int k=i;
                for(j=0;j<S;j++)
                    {
                       
                       index[i].array[j]=deq[k];
                       k++;

                    }
            }
        // for(i=0;i<N-2;i++)
        //     {
        //         for(j=0;j<S;j++)
        //             {
        //                 max=index[i].array[0];
        //                     for(m=0;m<S;m++)
        //                         {
        //                             if(index[i].array[m]>max)
        //                                 max=index[i].array[m];
        //                         }
        //             }
        //     }
        for(i=0;i<temp;i++)
            {
                for(j=0;j<S;j++)
                    {
                        cout << index[i].array[j];
                        cout << endl;
                    }
                    cout << endl << endl;
            }

    }