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
        int a,c;
        cin>>a>>c;
        int l=max(a,c);
        int b=min(a,c);

        int g1=max(2*b,l);
        int g=min(g1,l+b);

        cout<<g*g<<"\n";
    }

    return 0;
}