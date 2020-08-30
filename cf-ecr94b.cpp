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
        int p,f;
        cin>>p>>f;

        int cs,cw;
        cin>>cs>>cw;

        int ws,ww;
        cin>>ws>>ww;
        
        int minw,minc,maxw,maxc;
        if(ws<=ww)
        {
            minw=ws;
            minc=cs;

            maxw=ww;
            maxc=cw;
        }
        else
        {
            minw=ww;
            minc=cw;

            maxw=ws;
            maxc=cs;
        }
        
        int count=0;

        if(p>=minw)
        {
            for( ;minc>0 && p>minw;minc--)
            {
                p-=minw;
                count++;
            }

            for( ;maxc>0 && p>=maxw;maxc--)
            {
                p-=maxw;
                count++;
            }
        }

        if(f>=minw)
        {
            for( ;minc>0 && f>=minw;minc--)
            {
                f-=minw;
                count++;
            }

            for( ;maxc>0 && f>=maxw;maxc--)
            {
                f-=maxw;
                count++;
            }
        }

        cout<<count<<"\n";
        
        
        
    }

    return 0;
}