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
        int x,y,n;
        cin>>x>>y>>n;

        if(n%x<y)
        {
            cout<<x*((n/x)-1)+y<<"\n";
        }
        else
        {
            cout<<x*(n/x)+y<<"\n";
        }
        
    }

    return 0;
}