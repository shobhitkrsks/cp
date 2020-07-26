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
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];

        bool flag=true;
        for(int i=0;i<n-1 && flag;i++)
        {
            for(int j=0;j<n-1 && flag;j++)
            {
                if(s[i][j]=='1' && s[i][j+1]=='0' && s[i+1][j]=='0')
                    flag=false;
            }
        }

        if(flag)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }

    return 0;
}