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

        if(l==2)
            cout<<s<<"\n";
        else
        {
            string t="";
            t+=s[0];
            t+=s[1];
            for(int i=3;i<l;i+=2)
                t+=s[i];

            cout<<t<<"\n";
        }
        
    }

    return 0;
}