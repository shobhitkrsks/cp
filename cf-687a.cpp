#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;

        int res=0;
        int d;

        d=abs(1-r)+abs(1-c);
        // cout<<d<<"\n";
        res=max(res,d);
        d=abs(1-r)+abs(m-c);
        // cout<<d<<"\n";
        res=max(res,d);
        d=abs(n-r)+abs(1-c);
        // cout<<d<<"\n";
        res=max(res,d);
        d=abs(n-r)+abs(m-c);
        // cout<<d<<"\n";
        res=max(res,d);

        cout<<res<<"\n";
    }
}