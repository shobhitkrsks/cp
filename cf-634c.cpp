#include<iostream>
#include<bits/stdc++.h>
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
        int s[n+1];
        int t;
        memset(s,0,sizeof(s));
        for(int i=0;i<n;i++)
        {
            cin>>t;
            s[t]++;
        }

        int max=0, dc=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]>0)
            {
                dc++;
                if(s[i]>max)
                    max=s[i];
            }
        }
        dc--;
        if(dc<=max)
        {
            if(dc==max)
                cout<<dc<<"\n";
            else if(dc==max-1)
                cout<<dc<<"\n";
            else if(dc<max-1)
                cout<<dc+1<<"\n";
        }
        else
        {
            cout<<max<<"\n";
        }
    }
    return 0;
}