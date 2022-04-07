
#include <bits/stdc++.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;


vector<string> v;

void permute(string str, string output)
{
	
	if (str.size() == 0)
	{
		// cout << out << endl;
        v.push_back(output);

		return;
	}

	
	for (int i = 0; i < str.size(); i++)
	{
		permute(str.substr(1), output + str[0]);

		
		rotate(str.begin(), str.begin() + 1, str.end());
	}
}






int lcs( string X, string Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}



int findFact(int n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}


int findNcR(int n, int r)
{
    return findFact(n) / (findFact(n - r) * findFact(r));
}








int main()
{
	
	string str;
	cout << "Enter string"<< endl;
	cin >>str;

	int min;
	int m,n,res;
	permute(str, "");
    // vector<string> v;

    vector <string> :: iterator ip;


    sort(v.begin(),v.end());
    ip=unique(v.begin(),v.end());
    v.resize(std::distance(v.begin(),ip));
    // for(int i=0;i<v.size();i++)
    //     {
    //         cout << v[i] << endl;
    //     }

	int index;
	index=findNcR(v.size(),2);
	struct result
		{
			string sub1;
			string sub2;
			int x;
		}s[index];

	int k=0;
	for(int i=0;i<v.size()-1;i++)
		{
			for(int j=i+1;j<v.size();j++)
				{
					m=v[i].length();
					n=v[j].length();
					res=lcs(v[i],v[j],m,n);
					// array[k]=res;
					s[k].sub1=v[i];
					s[k].sub2=v[j];
					s[k].x=res;
					k++;

				}
				// cout << endl << array[k] << endl;
		}
	string str1,str2;
	min=s[0].x;
	str1=s[0].sub1;
	str2=s[0].sub2;
	for(int i=0;i<index;i++)
		{
			// cout << endl << s[i].x << endl;
			if(s[i].x<min)
				{
					min=s[i].x;
					str1=s[i].sub1;
					str2=s[i].sub2;


				}
		}



	

	cout << "Here smallest LCS will be " << min << " character long with S1= " << str1 << " and S2= " << str2 << endl; 
	return 0;
}
