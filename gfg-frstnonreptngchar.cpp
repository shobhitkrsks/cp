#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
 {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
        int ar[26];
        memset(ar,0,sizeof(ar));
        int pos[26];
        memset(pos,-1,sizeof(pos));

        for(int i=0;i<n;i++)
        {
            ar[s[i]-'a']++;
            if(ar[s[i]-'a']==1)
                pos[s[i]-'a']=i;
        }
        
        int maxp=1e6;
        for(int i=0;i<26;i++)
        {
            if(ar[i]==1 && pos[i]<maxp)
            {
                maxp=pos[i];
            }
        }

        if(maxp==1e6)
            cout<<"-1\n";
        else
            cout<<s[maxp]<<"\n";
        



	}
	
	return 0;
}