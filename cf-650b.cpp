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

        int o=0,e=0;

        int t;
        for(int i=0;i<n;i++)
        {
            cin>>t;

            if(i%2==0 && t%2!=0)
                e++;
            else if(i%2==1 && t%2!=1)
                o++;
        }

        if(o!=e)
            cout<<"-1\n";
        else
        {
            cout<<o<<"\n";
        }
        
    }

    return 0;
}