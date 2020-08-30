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
	    string s;
	    cin>>s;
	    int n=s.length();
	    
	    bool dp[n][n];
	    memset(dp,0,sizeof(dp));

        int maxl=1,maxlidx=0;
	    
	    for(int i=0;i<n;i++)
	        dp[i][i]=1;

        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                if(maxl<2)
                {
                    maxl=2;
                    maxlidx=i;
                }
            }
        }
	        
	    for(int gap=2;gap<n;gap++)
	    {
	        for(int l=0,h=gap;h<n;l++,h++)
	        {
	            if(dp[l+1][h-1] && s[l]==s[h])
	                dp[l][h]=1;
	                
                if(dp[l][h] && gap+1>=maxl)
                {
                    if(gap+1>maxl)
                    {
                        maxl=gap+1;
                        maxlidx=l;
                    }
                    else if(gap+1==maxl && l<maxlidx)
                    {
                        maxlidx=l;
                    }  
                }
	        }
	    }
	    
	    for(int i=maxlidx;i<maxlidx+maxl;i++)
	        cout<<s[i];
        cout<<"\n";
	    
	    
	}
	
	return 0;
}