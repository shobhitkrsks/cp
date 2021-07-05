#include<bits/stdc++.h>
using namespace std;
#define ll long long


 
// Returns factorial of n
ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll  nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll count=0LL;
        ll num;
        for(ll i=1LL;i<=n;i++)
        {
            cin>>num;
            if(num==i)
                count++;
        }

        cout<<nCr(count,2)<<"\n";


    }

    return 0;
}