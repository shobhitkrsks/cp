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
        int n;
        cin>>n;

        int count=0;

        while(n)
        {
            count+=n&1;
            n=n>>1;
        }

        cout<<count<<"\n";
    }

    return 0;
}