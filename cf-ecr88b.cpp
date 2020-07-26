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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int nw=0,nwp=0;
        string c[n];

        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            // cout<<c[i];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c[i][j]=='.')
                {
                    if(j<m-1 && c[i][j+1]=='.')
                    {
                        nw+=2;
                        nwp++;
                        j++;
                    }
                    else
                    {
                        nw++;
                    }
                }
            }

        }

        // cout<<endl<<nw<<" "<<nwp<<endl<<x<<" "<<y<<endl;

        cout<<min(nw*x,nwp*y+(nw-2*nwp)*x)<<"\n";
        
    }

    return 0;
}