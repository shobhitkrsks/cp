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
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        set<int> distinct;
        for(int i=0;i<n;i++)
        {
            if(distinct.find(ar[i])==distinct.end())
            {
                distinct.insert(ar[i]);
            }
        }

        if(distinct.size()>k)
        {
            cout<<"-1\n";
        }
        else
        {
            int extra=k-distinct.size();
            vector<int> list;
            for(int i=0;i<extra;i++)
                list.push_back(1);

            for(auto i:distinct)
                list.push_back(i);

            cout<<k*n<<"\n";
            for(int i=0;i<n;i++)
            {
                for(auto j:list)
                    cout<<j<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

/*
4 3 4 2
4 3 2 4 3 2
2 4 3 2 4 3 2

*/