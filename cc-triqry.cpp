#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pref[10000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(pref,0,sizeof(pref));
        int n,q;
        cin>>n>>q;

        int cx[n],cy[n];
        int minx=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>cx[i]>>cy[i];
        }

        for(int i=0;i<n;i++)
        {
            if(cx[i]-cy[i]>=0)
            {
                pref[cx[i]-cy[i]]++;
                minx=min(minx,cx[i]-cy[i]);

            }
            else
            {
                pref[0]++;
                minx=0;
            }

            pref[cx[i]+cy[i]+1]++;
            maxx=max(maxx,cx[i]+cy[i]+1);
        }

        for(int i=minx+1;i<=maxx;i++)
            pref[i]+=pref[i-1];

        int tl[q],tr[q];
        for(int i=0;i<q;i++)
            cin>>tl[i]>>tr[i];

        for(int i=0;i<q;i++)
        {
            int temp=*max_element(pref+tl[i],pref+tr[i]);
            if(tl[i]==0)
                cout<<temp<<" ";
            else
                cout<<temp-pref[tl[i]-1]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}