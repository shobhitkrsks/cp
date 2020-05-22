#include<iostream>
#include<bits/stdc++.h>
#define ll long long
int ar[200005];
using namespace std;

struct cmp
{
    bool operator()(pair<int,int> p1, pair<int,int> p2)
    const {
        if(p1.first!=p2.first)
            return p1.first>=p2.first;
        else
        {
            return p1.second<=p2.second;
        }
    }
};

int main()
{
    set<pair<int,int>,cmp> m;
	m.insert(make_pair(2,3));
	m.insert(make_pair(2,2));

	m.insert(make_pair(0,2));
	m.insert(make_pair(0,1));

    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}