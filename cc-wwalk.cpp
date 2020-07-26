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
        int a[n],b[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        ll da=0,db=0;
        ll wd=0;

        for(int i=0;i<n;i++)
        {
            if(da==db && a[i]==b[i])
            {
                wd+=a[i];
            }

            da+=a[i];
            db+=b[i];
        }

        cout<<wd<<"\n";

    }

    return 0;
}