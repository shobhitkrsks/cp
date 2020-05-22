#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int,vector<int>> m;
    m[2].push_back(-1);
    m[3].push_back(-1);
    m[4]=vector<int>{3,1,4,2};

    for(int i=5;i<=1000;i++)
    {
        m[i]=vector<int>(m[i-1].begin(),m[i-1].end());
        if(i%2==0)
            m[i].push_back(i);
        else
        {
            m[i].emplace(m[i].begin(),i);
        }
        
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        for(auto i:m[n])
            cout<<i<<" ";

        cout<<"\n";
    }

    return 0;
}