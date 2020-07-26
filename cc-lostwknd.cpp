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
        int a[5];
        int p;
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>p;

        int res=p*(a[0]+a[1]+a[2]+a[3]+a[4]);

        if(res<=120)
            cout<<"No\n";
        else
        {
            cout<<"Yes\n";
        }
        
    }

    return 0;
}