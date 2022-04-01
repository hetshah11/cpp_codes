#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        string str1;
        string str2;
        // string demo1;
        // string demo2;
        

        cin >> str1;
        cin >> str2;
        int i,l1,l2;
        l1=str1.length();
        l2=str2.length();
        char demo1[l1];
        char demo2[l2];


        int j=0;
        for(i=l1-1;i>=0;i--)
            {
                if(str1[i]=='#')
                    if(str1[i-1]=='#')
                        continue;
                    else
                        i--;
                else
                    {
                        demo1[j]=str1[i];
                        j++;
                    }    
                    

            }
            demo1[j]='\0';


        int k=0;
        for(i=l2-1;i>=0;i--)
            {
                if(str2[i]=='#')
                    if(str2[i-1]=='#')
                        continue;
                    else
                        i--;
                else
                    {
                        demo2[k]=str2[i];
                        k++;
                    }    
                    

            }
             demo2[k]='\0';
            
        cout << endl << demo1 << endl;
        cout << endl << demo2 << endl;

        if(strcmp(demo1,demo2)==0)
            cout << "Same" << endl;

        else    
            cout << "Different" << endl;

        return 0;

    }