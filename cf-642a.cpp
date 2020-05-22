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
        ll n,m;
        cin>>n>>m;

        if(n==1)
            cout<<"0\n";
        else if(n==2)
            cout<<m<<"\n";
        else
        {
            cout<<2*m<<"\n";
        }
        
        
    }

    return 0;
}