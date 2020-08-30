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
	    ll m,n,x;
	    cin>>m>>n>>x;
	    
	    ll dp[n+1][x+1];
	    memset(dp,0LL,sizeof(dp));

        for(int i=1;i<=m && i<=x;i++)
        {
            dp[1][i]=1;
        }

        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=x;j++)
            {
                for(int k=1;k<=m && k<j;k++)
                {
                    dp[i][j]+=dp[i-1][j-k];
                }
            }
        }

        cout<<dp[n][x]<<"\n";
	}
	
	return 0;
}