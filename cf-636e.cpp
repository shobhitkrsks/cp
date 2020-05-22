#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adjl;
queue<int> q;
int u;

void dfs(vector<int> &dist, int src)
{
    dist[src]=0;
    q.push(src);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(auto i:adjl[u])
        {
            if(dist[i]==-1)
            {
                q.push(i);
                dist[i]=dist[u]+1;
            }
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
        int n,m,a,b,c;
        cin>>n>>m>>a>>b>>c;
        int p[m];
        for(int i=0;i<m;i++)
            cin>>p[i];

        adjl=vector<vector<int>>(n);
        int s,d;
        for(int i=0;i<m;i++)
        {
            cin>>s>>d;
            adjl[s-1].push_back(d-1);            
            adjl[d-1].push_back(s-1);            
        }

        a--;b--;c--;

        sort(p,p+m);
        long long pref[m+1];
        pref[0]=0;
        for(int i=0;i<m;i++)
            pref[i+1]=p[i]+pref[i];

        vector<int> pathax(n,-1);
        vector<int> pathbx(n,-1);
        vector<int> pathcx(n,-1);
        dfs(pathax,a);
        dfs(pathbx,b);
        dfs(pathcx,c);

        /*
        int t=adjl.size();
        for(int i=0;i<t;i++)
        {
            cout<<"i:"<<i<<" ";
            for(auto j:adjl[i])
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<=m;i++)
            cout<<pref[i]<<" ";
        cout<<endl;

        for(auto i:pathax)
            cout<<i<<" ";
        cout<<endl;

        for(auto i:pathbx)
            cout<<i<<" ";
        cout<<endl;

        for(auto i:pathcx)
            cout<<i<<" ";
        cout<<endl;
        */

        long long ans=LONG_LONG_MAX;
        for(int i=0;i<n;i++)
        {
            if(pathax[i]+pathbx[i]+pathcx[i]>m) continue;
            ans=min(ans,pref[pathax[i]+pathbx[i]+pathcx[i]]+pref[pathbx[i]]);
        }

        cout<<ans<<"\n";

    }

    return 0;
}