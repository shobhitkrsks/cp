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
        int n,x;
        cin>>n>>x;
        int ar[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            ar[i]%=x;
        }

        int l=0,r=n-1;
        while(sum%x==0 && l<=r)
        {
            int l_=sum-ar[l];
            int r_=sum-ar[r];

            if(l_%x==0 && r_%x==0)
            {
                sum=sum-ar[l]-ar[r];
                l++;r--;
            }
            else if(l_%x!=0 && r_%x==0)
            {
                sum-=ar[l];
                l++;   
            }
            else if(l_%x==0 && r_%x!=0)
            {
                sum-=ar[r];
                r--;
            }
            else
            {
                sum-=ar[l];
                l++;
            }
        }
        if(r-l+1==0)
            cout<<"-1\n";
        else
            cout<<r-l+1<<"\n";
    }

    return 0;
}