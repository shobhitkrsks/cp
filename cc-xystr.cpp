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

        ll cnt=0;
        for(int i=0;i<l-1;i++)
        {
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x'))
            {
                cnt++;
                i++;
            }
        }

        cout<<cnt<<"\n";
    }

    return 0;
}