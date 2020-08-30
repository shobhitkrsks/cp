#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    // tc=1;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>m;
        // n=5;
        // m=3;

        // int ar[]={1,2,5};
        int ar[m];
        for(int i=0;i<m;i++)
            cin>>ar[i];

        cin>>n;

        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
            dp[i][0]=1;

        for(int i=1;i<=n;i++)
            dp[0][i]=0;

        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                //including coin m
                int x=(j-ar[i-1])>=0?dp[i][j-ar[i-1]]:0;
                
                //excluding coin m
                int y=dp[i-1][j];

                dp[i][j]=x+y;
            }
        }

        /* for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        } */

        cout<<dp[m][n]<<"\n";
    }

    return 0;
}