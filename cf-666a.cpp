#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

        vector<string> s;
        string temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            s.push_back(temp);
        }

        int ar[256];
        memset(ar,0,sizeof(ar));
        for(int i=0;i<n;i++)
        {
            int l=s[i].length();
            for(int j=0;j<l;j++)
            {
                ar[s[i][j]]++;
            }
        }

        bool possible=true;
        for(int i='a';i<='z';i++)
        {
            if(ar[i]%n!=0)
            {
                possible=false;
                break;
            }
        }

        if(possible)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        


    }
    return 0;
}