#include <iostream>
#include<bits/stdc++.h>
#include<map>
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
        int g1,g2,p;
        string t1,t2,t;
        map<string,pair<int,int>> m;
        for(int i=0;i<12;i++)
        {
            cin>>t1>>g1>>t>>g2>>t2;
            if(m.find(t1)==m.end())
            {
                if(g1>g2)
                    m.insert(make_pair(t1,make_pair(3,g1-g2)));
                else if(g2>g1)
                    m.insert(make_pair(t1,make_pair(0,g1-g2)));
                else
                    m.insert(make_pair(t1,make_pair(1,0)));
            }
            else
            {
                if(g1>g2)
                {
                    m[t1].first+=3;
                    m[t1].second+=g1-g2;
                }
                else if(g2>g1)
                {
                    m[t1].second+=g1-g2;
                }
                else
                {
                    m[t1].first+=1;
                }
            }
            if(m.find(t2)==m.end())
            {
                if(g2>g1)
                    m.insert(make_pair(t2,make_pair(3,g2-g1)));
                else if(g1>g2)
                    m.insert(make_pair(t2,make_pair(0,g2-g1)));
                else
                    m.insert(make_pair(t2,make_pair(1,0)));
            }
            else
            {
                if(g2>g1)
                {
                    m[t2].first+=3;
                    m[t2].second+=g2-g1;
                }
                else if(g1>g2)
                {
                    m[t2].second+=g2-g1;
                }
                else
                {
                    m[t2].first+=1;
                }
            }
        }

        multimap <pair<int,int>,string> mm;

        for(auto i:m)
        {
            mm.insert(make_pair(make_pair(i.second.first,i.second.second),i.first));
        }

        auto i=mm.rbegin();
        cout<<i->second<<" ";
        i++;
        cout<<i->second<<"\n";

    }
	return 0;
}
