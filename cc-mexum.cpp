#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ar[100100];
int dp[100100];
int m=998244353;
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
        for(int i=0;i<n;i++)
            cin>>ar[i];

        sort(ar,ar+n);

        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==1)
                dp[i]=2;
            else
                dp[i]=1;

            count+=dp[i];
        }

        for(int i=0;i<n-1;i++)
        {
            int cur=dp[i];
            for(int j=i+1;j<n;j++)
            {
                if(ar[j]<cur)
                    count=(count+cur)%m;
                else if(ar[j]==cur)
                {
                    cur++;
                    count=(count+cur)%m;
                }
                else if(ar[j]>cur)
                {
                    count=(count+((n-j)*cur)%m)%m;
                    j=n;
                }
                cout<<count<<" ";
            }
            cout<<"\n";
        }

        cout<<count+1<<"\n";        
    }

    return 0;
}