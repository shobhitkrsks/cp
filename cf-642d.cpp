#include<iostream>
#include<bits/stdc++.h>
#define ll long long
int ar[200005];
using namespace std;

struct cmp
{
    bool operator()(pair<int,int> p1, pair<int,int> p2)
    const {
        int l1=p1.second-p1.first+1;
        int l2=p2.second-p2.first+1;

        if(l1!=l2)
        {
            return l1>l2;
        }
        else
        {
            return p1.first<=p2.first;
        }
        
    }
};

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

        set<pair<int,int>,cmp> s; //first->start; second->end

        s.insert(make_pair(1,n));
        for(int i=1;i<=n;i++)
        {
            pair<int,int> p=*s.begin();
            int l=p.second-p.first+1;
            if(l%2==1)
            {
                ar[p.first+l/2]=i;
                s.erase(s.begin());
                s.insert(make_pair(p.first,p.first+(l/2)-1));
                s.insert(make_pair(p.first+(l/2)+1,p.second));
            }
            else
            {
                ar[p.first+(l/2)-1]=i;
                s.erase(s.begin());
                s.insert(make_pair(p.first,p.first+(l/2)-2));
                s.insert(make_pair(p.first+(l/2),p.second));
            }
        }

        for(int i=1;i<=n;i++)
            cout<<ar[i]<<" ";

        cout<<"\n";
    }

    return 0;
}