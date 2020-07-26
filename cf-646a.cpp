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
        int n,x;
        cin>>n>>x;
        int o=0,e=0;
        int t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(t%2==0)
                e++;
            else
            {
                o++;
            }
            
        }

        if(o==0)
            cout<<"NO\n";
        else if(o>=x)
        {
            if(x%2==0)
            {
                if(e>=1)
                    cout<<"YES\n";
                else
                {
                    cout<<"NO\n";
                }
            }
            else
            {
                cout<<"YES\n";
            }
        }
        else
        {
            if(o%2==0)
            {
                if(e>=x-o+1)
                    cout<<"YES\n";

                else
                {
                    cout<<"NO\n";
                }
                
            }
            else
            {
                cout<<"YES\n";
            }
            
        }
    }

    return 0;
}