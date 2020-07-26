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
        ll n;
        cin>>n;
        ll r=n&(n-1);
        if(r==0)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
            
    }

    return 0;
}