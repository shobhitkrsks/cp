#include<iostream>
#include<bits/stdc++.h>
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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        for(int i=0;i<n;i++)
        {
            s+='a'+i%b;
        }
        cout<<s<<"\n";
    }
    return 0;
}