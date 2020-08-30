#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

string convert(int n, int &l)
{
    
    string s="";
    
    while(n!=0)
    {
        l++;
        s+='0'+n%10;
        n/=10;
    }

    return s;
}

int main()
 {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    int l=0;
	    string s=convert(n,l);
	    
	    bool palin=true;
        for(int i=0;i<l/2;i++)
        {
            if(s[i]!=s[l-1-i])
                palin=false;
        }

        if(palin)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        
	}
	
	return 0;
}