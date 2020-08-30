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
        int m,n;
        cin>>m>>n;

        int ar[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>ar[i][j];
            }
        }

        if(m==1)
        {
            for(int i=1;i<n;i++)
                ar[0][i]+=ar[0][i-1];
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                ar[0][i]+=max(ar[0][i-1],ar[1][i-1]);

                for(int j=1;j<m-1;j++)
                {
                    ar[j][i]+=max(ar[j-1][i-1],max(ar[j][i-1],ar[j+1][i-1]));
                }

                ar[m-1][i]+=max(ar[m-2][i-1],ar[m-1][i-1]);
            }
        }
        
        int maxn=-1;
        for(int i=0;i<m;i++)
        {
            maxn=max(maxn,ar[i][n-1]);
        }

        cout<<maxn<<"\n";
    }

    return 0;
}