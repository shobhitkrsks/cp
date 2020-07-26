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
        string s;
        cin>>s;
        int l=s.length();

        int n0[l+2],n1[l+2];
        n0[0]=0;n1[0]=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                n0[i+1]=n0[i]+1;
                n1[i+1]=n1[i];
            }
            else
            {
                n1[i+1]=n1[i]+1;
                n0[i+1]=n0[i];
            }
        }

        n0[l+1]=n0[l];n1[l+1]=n1[l];
        int mini=INT_MAX;
        for(int i=0;i<=l+1;i++)
        {
            mini=min(min(n1[i]+n0[l+1]-n0[i],n0[i]+n1[l+1]-n1[i]),mini);
            // cout<<mini<<" ";
        }
        // cout<<"\n";
        cout<<mini<<"\n";
    }

    return 0;
}