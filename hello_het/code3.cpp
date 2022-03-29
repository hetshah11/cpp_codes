#include<iostream>
#include<string.h>
using namespace std;

int main()
    {
        int n,flag,flag1,i;

        cin >>n;

        int arr[n];
        for(i=0;i<n;i++)
            {
                cin >> arr[i];
            }
        if(n==1)
            {
                cout << "Accepted" << endl;
                return 0;
            }
            


        if(arr[0]%2==0)
            {
                for(i=1;i<n;i=i+2)
                    {
                        if(arr[i]%2==0)
                            {
                                flag=0;
                                break;
                            }
                            
                        else    
                            {
                                flag=1;
                            }
                    }
                for(i=2;i<n;i=i+2)
                    {
                        if(arr[i]%2==1)
                            {
                                flag1=0;
                                break;
                            }
                            
                        else    
                            {
                                flag1=1;
                            }

                    }
                if(flag==1 && flag1==1)
                    cout << "Accepted" << endl;
                else    
                    cout << "Rejected" << endl;
            }



            else if(arr[0]%2==1)
            {
                for(i=1;i<n;i=i+2)
                    {
                        if(arr[i]%2==1)
                            {
                                flag=0;
                                break;
                            }
                            
                        else    
                            {
                                flag=1;
                            }
                    }
                for(i=2;i<n;i=i+2)
                    {
                        if(arr[i]%2==0)
                            {
                                flag=0;
                                break;
                            }
                            
                        else    
                            {
                                flag=1;
                            }

                    }
                if(flag==1 && flag1==1)
                    cout << "Accepted" << endl;
                else    
                    cout << "Rejected" << endl;
            }


            return 0;

    }