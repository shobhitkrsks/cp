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
        int x,n,m;
        cin>>x>>n>>m;
        for(int i=0;i<n && x>20;i++)
        {
            x/=2;
            x+=10;
        }
        for(int i=0;i<m;i++)
            x-=10;

        if(x<=0)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }

    return 0;
}