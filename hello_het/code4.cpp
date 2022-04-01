#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        int n,i,j,flag;
        cin >>n;
        string str[n];
        char array[n+1],temp;

        for(i=0;i<n;i++)
            {
                cin >> str[i];
            }


        // for(i=0;i<n;i++)
        //     {
        //         cout << str[i] << endl;
        //     }
        for(i=0;i<n;i++)
            {
                 array[i]=str[i][0];
            }

        for(i=0;i<n;i++)
            {
                temp=array[i];
                for(j=n-1;j>i;j--)
                {
              
                if(array[j]==temp)
                    {
                        flag=0;
                        break;
                    }
                    

                else    
                    {
                        flag=1;
                    }
                

                 }
                 if(flag==0)
                    break;

            }
       
        if(flag==1)
            {
                cout << "No problem" << endl;
            }
        else    
            cout << "OH SHIT!" << endl;
        

        
            return 0;

    }