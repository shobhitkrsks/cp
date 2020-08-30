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

        string s;
        cin>>s;

        string res="";

        for(int i=0;i<n;i++)
        {
            res=res+s[2*i];
        }

        cout<<res<<"\n";
    }

    return 0;
}