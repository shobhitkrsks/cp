#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d>=c && b<a)
        {
            cout<<"-1\n";
        }
        else
        {
            if(b>=a)
                cout<<b<<"\n";
            else
            {
                // cout<<"ceil="<<(ceil)((double)(a-b)/(double)(c-d))<<endl;
                ll k=max(0LL,(ll)(ceil)((double)(a-b)/(double)(c-d)));
                cout<<b+c*k<<"\n";
            }
        }
        
    }

    return 0;
}