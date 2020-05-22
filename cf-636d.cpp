#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,k,ar[200001],cnt[400100],sum[400100];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {

        cin>>n>>k;

        memset(sum,0,sizeof(sum));
        memset(cnt,0,sizeof(cnt));

        for(int i=0;i<n;i++)
            cin>>ar[i];
        
        for(int i=0;i<n/2;i++)
        {
            cnt[ar[i]+ar[n-1-i]]++;
            int l=min(ar[i],ar[n-1-i])+1;
            int r=max(ar[i],ar[n-1-i])+k;
            sum[l]+=1;
            sum[r+1]-=1;
        }

        /*for(int i=0;i<=2*k;i++)
        {
            cout<<cnt[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<=2*k;i++)
        {
            cout<<sum[i]<<" ";
        }
        cout<<endl;*/

        long mini=LONG_MAX;
        for(int i=2;i<=2*k;i++)
        {
            sum[i]+=sum[i-1];
            if(sum[i]-cnt[i]+2*((n/2)-sum[i])<mini)
            mini=sum[i]-cnt[i]+2*((n/2)-sum[i]);
        }

        cout<<mini<<endl;


        /*
        int mini=INT_MAX;
        for(int i=2;i<=2*k;i++)
        {
            int count=0;
            for(int j=0;j<n/2;j++)
            {
                if(ar[j]+ar[n-1-j]==i);
                else if(ar[j]+ar[n-1-j]>i)
                {
                    if(min(ar[j],ar[n-1-j])+1<=i)
                        count++;
                    else
                        count+=2;
                }
                else if(ar[j]+ar[n-1-j]<i)
                {
                    if(max(ar[j],ar[n-1-j])+k>=i)
                        count++;
                    else
                        count+=2;
                }
            }
            if(count<mini)
                mini=count;
            */
    }

    return 0;
}