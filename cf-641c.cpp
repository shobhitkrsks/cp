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
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    ll lcm=((ll)ar[0]*(ll)ar[1])/(ll)__gcd(ar[0],ar[1]);
    ll hcf=lcm;

    for(int i=2;i<n;i++)
    {
        lcm=((ll)ar[i]*(ll)ar[0])/(ll)__gcd(ar[0],ar[i]);
        hcf=__gcd(hcf,lcm);
    }

    for(int i=1;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            lcm=((ll)ar[i]*(ll)ar[j])/(ll)__gcd(ar[j],ar[i]);
            hcf=__gcd(hcf,lcm);
        }
    }

    cout<<hcf<<"\n";
    

    return 0;
}