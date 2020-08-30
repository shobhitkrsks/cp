#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define INF 1e8
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
        int n;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        int jumps[n];
        for(int i=0;i<n;i++)
            jumps[i]=INF;

        jumps[0]=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=i+ar[i] && j<n;j++)
            {
                jumps[j]=min(jumps[j],jumps[i]+1);
            }
        }

        /* for(int i=0;i<n;i++)
            cout<<jumps[i]<<" "; */

        if(jumps[n-1]==INF)
            cout<<"-1\n";
        else
            cout<<jumps[n-1]<<endl;
    }

    return 0;
}