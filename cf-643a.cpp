#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

inline ll mind(ll n)
{
    ll rem=10;
    while(n!=0 && rem!=0)
    {
        rem=min(n%10,rem);
        n/=10;
    }
    return rem;
}

inline ll maxd(ll n)
{
    ll rem=-1;
    while(n!=0 && rem!=9)
    {
        rem=max(n%10,rem);
        n/=10;
    }
    return rem;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a1,k;
        cin>>a1>>k;
        k--;
        ll a=a1;
        while(k--)
        {
            if(mind(a)!=0 && maxd(a)!=0)
                a+=mind(a)*maxd(a);
            else
                break;
            
        }

        cout<<a<<"\n";
    }

    return 0;
}