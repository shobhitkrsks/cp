#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        queue<int> q;
        stack<int> s;

        int n;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        sort(ar,ar+n);

        q.push(ar[0]);
        bool flag=true;
        for(int i=1;i<n && flag;i++)
        {
            if(ar[i]!=q.back())
                q.push(ar[i]);
            else
            {
                if(s.empty() || (!s.empty() && ar[i]!=s.top()))
                    s.push(ar[i]);
                else
                    flag=false;
            }
        }

        if(!flag || (!q.empty() && !s.empty() && q.back()==s.top()))
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            while(!q.empty())
            {
                cout<<q.front()<<" ";
                q.pop();
            }           
            while (!s.empty())
            {
                cout<<s.top()<<" ";
                s.pop();
            }
            cout<<"\n";
            

        }
        
    }

    return 0;
}