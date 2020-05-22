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
        int n;
        cin>>n;
        int pos[n+1];
        int ar[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            pos[ar[i]]=i;
        }
        //special case 1 2 3 4 ...
        bool flag=true;
        for(int i=1;i<n && flag;i++)
        {
            if(pos[i]+1<=n && pos[i+1]==pos[i]+1) continue;
            else if(pos[i]==n) continue;
            else if(ar[pos[i]+1]<i) continue;
            else flag=false;
        }
        
        if(flag)
            cout<<"Yes\n";
        else
        {
            cout<<"No\n";
        }
        
    }

    return 0;
}