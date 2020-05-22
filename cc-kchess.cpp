#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct range
{
    pair<long,long> cord[8];
};

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        range kcircle[n];
        long x,y;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            
            kcircle[i].cord[0]=make_pair(x+2,y+1);
            kcircle[i].cord[1]=make_pair(x+2,y-1);
            kcircle[i].cord[2]=make_pair(x-2,y+1);
            kcircle[i].cord[3]=make_pair(x-2,y-1);
            kcircle[i].cord[4]=make_pair(x+1,y-2);
            kcircle[i].cord[5]=make_pair(x-1,y-2);
            kcircle[i].cord[6]=make_pair(x-1,y+2);
            kcircle[i].cord[7]=make_pair(x+1,y+2);
        }

        cin>>x>>y;
        range kingr;
        kingr.cord[0]=make_pair(x+1,y);
        kingr.cord[1]=make_pair(x-1,y);
        kingr.cord[2]=make_pair(x-1,y+1);
        kingr.cord[3]=make_pair(x,y+1);
        kingr.cord[4]=make_pair(x+1,y+1);
        kingr.cord[5]=make_pair(x-1,y-1);
        kingr.cord[6]=make_pair(x,y-1);
        kingr.cord[7]=make_pair(x+1,y-1);

        bool marked[8];
        memset(marked,0,sizeof(marked));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<8;j++)
            {
                for(int k=0;k<8;k++)
                {
                    if(kingr.cord[k]==kcircle[i].cord[j])
                        marked[k]=true;
                }
            }
        }

        bool flag=false;
        for(int i=0;i<8;i++)
        {
            if(marked[i]==false)
            {
                flag=true;
                break;
            }
        }

        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}