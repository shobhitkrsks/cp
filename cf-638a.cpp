#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
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

        ll sum1=0,sum2=0;
        sum1+=pow(2,n);
        int r=n/2;
        r-=1;

        for(int i=1;i<=r;i++)
        {
            sum1+=pow(2,i);
        }

        for(int i=r+1;i<=n-1;i++)
        {
            sum2+=pow(2,i);
        }
        cout<<abs(sum1-sum2)<<"\n";
    }

    return 0;
}