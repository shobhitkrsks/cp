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
        int n,k;
        cin>>n>>k;

        map<int,int,greater<int>> m;
        int t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(t%k!=0)
            {
                if(m.find(t%k)==m.end())
                    m.insert(make_pair(t%k,1));
                else
                    m[t%k]++;
            }
        }

        int count=0;
        int x=0;
        bool flag1=true;
        int key,value;
        int incx;

        while(flag1)
        {
            bool flag2=false; 

            for(auto i:m)
            {
                key=i.first;
                value=i.second;

                if(value!=0)
                {
                    flag2=true;

                    incx=(k-((key+x)%k))%k;

                    count+=incx;

                    x+=incx;

                    m[key]--;

                    count++;

                    x++;
                }
            }

            if(flag2==false)
            {
                flag1=false;
                break;
            }
        }

        cout<<count<<"\n";

        
    }

    return 0;
}