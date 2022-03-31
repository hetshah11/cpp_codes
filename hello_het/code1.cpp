#include<iostream>
#include<string.h>
// #include<cstring>

using namespace std;

int main()
    {
        int n;
        cin >>n;

        string s[n],s1,s2;
        

        int i,k,m,j,flag,flag1,count=0,x;

        for(i=0;i<n;i++)
            {
                cin >>s[i];
            }
        for(i=0;i<n;i++)
            {
                if(s[i].find_first_of('a')!=-1 && s[i].find_first_of('b')!=-1)
                    {
                        if(s[i].find_first_of('a')==0)
                            {
                                x=s[i].find_first_of('b');
                                cout << endl << x << endl;
                                s1=s[i].substr(0,x);
                                
                                s2=s[i].substr(x,((s[i].length())-1));

                                cout << endl <<s1 << endl <<s2 << endl;
                                
                                for(k=0;k<s1.length();k++)
                                    {
                                        if(s1[k]!='a')
                                            {
                                                flag=0;
                                                break;
                                            }
                                        else    
                                            flag=1;
                                    }
                                if(flag==1)
                                    {
                                        for(m=0;m<s2.length();m++)
                                            {
                                                if(s2[m]!='b')
                                                    {
                                                        flag1=0;
                                                        break;
                                                    }
                                                else    
                                                    flag1=1;
                                            }
                                    }
                                if(flag==1 && flag1==1)
                                    count++;
                            }
                    }
            }
            cout << endl << endl << count;
            return 0;
    }