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
        int n,m;
        cin>>n>>m;
        if(n%2==0 || m%2==0)
        {
            cout<<(n*m)/2<<"\n";
        }
        else
        {
            cout<<((n*m)/2)+1<<"\n";
        }
        
    }

    return 0;
}