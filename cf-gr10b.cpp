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
        int n;
        ll k;
        cin>>n>>k;
        
        int ar[n];
        int maxn=INT_MIN;
        int minn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>maxn)
                maxn=ar[i];
            if(ar[i]<minn)
                minn=ar[i];
        }

        int s[n];
        int d=maxn-minn;
        for(int i=0;i<n;i++)
        {
            s[i]=maxn-ar[i];
        }

        if(k%2==1)
        {
            for(int i=0;i<n;i++)
                cout<<s[i]<<" ";
            cout<<"\n";
        }
        else if(k%2==0)
        {
            for(int i=0;i<n;i++)
                cout<<d-s[i]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}