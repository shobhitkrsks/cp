#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        int n;
        cin>>n;
        ll ar[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }

        ll pref[n+1],suf[n+1];

        pref[1]=ar[1];
        for(int i=2;i<=n;i++)
        {
            pref[i]=__gcd(pref[i-1],ar[i]);
        }

        suf[n]=ar[n];
        for(int i=n-1;i>=1;i--)
        {
            suf[i]=__gcd(suf[i+1],ar[i]);
        }

        ll hcf[n+1];
        hcf[1]=suf[2];
        hcf[n]=pref[n-1];
        ll lcm=hcf[1];
        for(int i=2;i<=n-1;i++)
        {
            hcf[i]=__gcd(pref[i-1],suf[i+1]);
            lcm=(hcf[i]*lcm)/__gcd(hcf[i],lcm);
        }

        cout<<lcm<<"\n";
    

    return 0;
}