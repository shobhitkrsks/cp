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
        int a,b;
        cin>>a>>b;

        int x,y;
        x=min(a,b);
        y=max(a,b);

        if(y>=2*x)
            cout<<x<<"\n";
        else
        {
            int count=y/2;

            x-=y/2;
            y=y%2;

            if(y==1 && x>=2)
                count++;

            cout<<count<<"\n";

            
        }
        
    }

    return 0;
}