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
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        int cursum=ar[0],maxsum=ar[0];
        for(int i=1;i<n;i++)
        {
            cursum=max(ar[i],cursum+ar[i]);
            maxsum=max(maxsum,cursum);
        }

        cout<<maxsum<<"\n";
    }

    return 0;
}