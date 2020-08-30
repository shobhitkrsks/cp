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
    int t=0;
    while(t++<tc)
    {
        int n;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        if(n<2)
            cout<<"Case #"<<t<<": "<<"0\n";
        else
        {
            
        }
        
        int cur=ar[1]-ar[0];
        int count=1;
        int maxi=1;
        for(int i=2;i<n;i++)
        {
            if(ar[i]-ar[i-1]==cur)
            {
                count++;
                maxi=max(maxi,count);
            }
            else
            {
                cur=ar[i]-ar[i-1];
                count=1;
            }
        }

        cout<<"Case #"<<t<<": "<<maxi+1<<"\n";
    }

    return 0;
}