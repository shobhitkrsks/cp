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

        int ar[2*n];
        int t;
        vector<int> o,e;
        int os=0,es=0;
        for(int i=0;i<2*n;i++)
        {
            cin>>t;
            if(t%2==0)
            {
                e.push_back(i);
                es++;
            }
            else
            {
                o.push_back(i);
                os++;
            }
        }

        int count=os+es;
        while(os>1 && count>2)
        {
            cout<<o[os-1]+1<<" "<<o[os-2]+1<<"\n";
            os-=2;
            count-=2;
        }
        while(es>1 && count>2)
        {
            cout<<e[es-1]+1<<" "<<e[es-2]+1<<"\n";
            es-=2;
            count-=2;
        }
    }

    return 0;
}