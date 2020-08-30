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
        int maxm=-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>maxm)
                maxm=ar[i];
        }

        if(maxm>k)
            cout<<"-1\n";
        else
        {
            int count=0;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                if(sum+ar[i]>k)
                {
                    sum=ar[i];
                    count++;
                }
                else
                {
                    sum+=ar[i];
                }
            }

            count++;
            cout<<count<<"\n";
        }

        
        
    }

    return 0;
}