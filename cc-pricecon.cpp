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
        int n,k;
        cin>>n>>k;

        int t,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(t>k)
                sum+=t-k;
        }

        cout<<sum<<"\n";
    }

    return 0;
}