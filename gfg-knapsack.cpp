#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,W;
        cin>>n>>W;

        int val[n],wt[n];
        memset(val,0,sizeof(val));
        memset(wt,0,sizeof(val));

        for(int i=0;i<n;i++)
            cin>>val[i];

        for(int i=0;i<n;i++)
            cin>>wt[i];

        int dp[n+1][W+1];
        memset(dp,0,sizeof(dp));

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+val[i-1]);
                }
            }
        }

        /* for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        } */

        cout<<dp[n][W]<<"\n";

    }

    return 0;
}