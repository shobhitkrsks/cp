#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void permutestring(string s, int start, int last)
{
    if(start==last)
        cout<<s<<"\n";
    else
    {
        for(int i=start;i<=last;i++)
        {
            swap(s[start],s[i]);
            permutestring(s,start+1,last);
            swap(s[start],s[i]);
        }
    }
    
}

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
        permutestring(s,0,l-1);
    }

    return 0;
}