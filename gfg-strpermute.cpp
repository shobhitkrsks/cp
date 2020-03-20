#include <iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<vector>
using namespace std;

void permute(string s,int l,int r,vector<string>* cont)
{
    if(l==r)
    {
    	cont->push_back(s);
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(s[l],s[i]);
			permute(s,l+1,r,cont);
			swap(s[l],s[i]);
		}
	}
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        
        vector<string> cont;
        
        permute(s,0,l-1,&cont);
        
        sort(cont.begin(),cont.end());
        
        vector<string>::iterator i;
        
        for(i=cont.begin();i!=cont.end();++i)
        {
        	cout<<*i<<" ";
		}
        cout<<endl;
    }
    
    return 0;
}
