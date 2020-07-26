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

        int ar[n];
        int max=-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>max)
                max=ar[i];
        }

        int b=log2(max)+1;

        int r=0;

        for(int j=b;j>=1;j--)
        {
            if(k)
            {
                bool flag=false;
                for(int i=0;i<n && !flag;i++)
                {
                    if(ar[i] & (1<<(j-1)))
                        flag=true;
                }

                if(flag)
                {
                    r|=1<<(j-1);
                    k--;
                }
            }
        }

        cout<<r<<"\n";

        
    }

    return 0;
}