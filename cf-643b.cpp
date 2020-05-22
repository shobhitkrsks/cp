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
        int e[n];
        for(int i=0;i<n;i++)
            cin>>e[i];

        sort(e,e+n);

        int size=0,mini,count=0;

        for(int i=0;i<n;i++)
        {
            size++;
            if(size==1)
                mini=e[i];
            else
                mini=max(mini,e[i]);
            if(size>=mini)
            {
                count++;
                size=0;
            }
        }

        cout<<count<<"\n";
    }

    return 0;
}