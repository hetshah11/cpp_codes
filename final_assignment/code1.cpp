#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
    {
        int flag,i,j,m,n;
        vector<string> s1;
        vector<string> s2;

        vector<string>s3;
        cout <<"Enter no. of elements in string 1" << endl;
        cin >>m;
        cout <<"Enter no. of elements in string 2" << endl;
        cin >>n;
        cout << "Enter " << m<< " elements in string 1" << endl;
        string str;
        for(i=0;i<m;i++)
            {
                cin >> str;
                s1.push_back(str);
            }
        cout << endl;
        cout << "Enter " << n << " elements in string 2" << endl;
        
        for(i=0;i<n;i++)
            {
                cin >> str;
                s2.push_back(str);
            }
       

        cout <<endl << "Elements in vector 1" << endl;
        cout << "[";
        for(i=0;i<s1.size();i++)
                {
                    cout << s1[i] << ", ";
                }
        cout << "]" << endl << endl;

        cout << "Elements in vector 2" << endl;
        cout << "[";
        for(i=0;i<s2.size();i++)
                {
                    cout << s2[i] << ", ";
                }
        cout << "]" << endl << endl;

        s3=s1;

        
       

        for(i=0;i<s2.size();i++)
            {
                for(j=0;j<s1.size();j++)
                    {
                        if(s2[i]==s1[j])
                            {
                                flag=0;
                                break;
                            }
                        else    
                            flag=1;
                    }
                if(flag==1)
                    s3.push_back(s2[i]);
            }

            cout << "Vector in which all name appears only once" << endl;

        cout << "[";
        for(i=0;i<s3.size();i++)
                {
                    cout << s3[i] << ", ";
                }
        cout << "]" << endl;

            

        

        return 0;



    }

