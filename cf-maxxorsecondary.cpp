/* #include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll ar[n];

    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    ll mxor=0;
    for(ll i=1;i<n;i++)
    {
        for(ll j=0;j<i;j++)
        {
            int fmax=ar[i],smax=ar[i];
            for(ll k=j;k<=i;k++)
            {
                if(ar[k]>fmax)
                {
                    fmax=ar[k];
                }    
                else if(ar[k]>smax && ar[k]<fmax)
                {
                    smax=ar[k];
                }
                else {}
            }
            int result=fmax^smax;
            if(result>mxor)
                mxor=result;
        }
    }

    cout<<mxor;

    return 0;
} */

#include<iostream>
#include<stack>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    stack <ll> s;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];

    ll xormax=0;
    for(ll i=0;i<n;i++)
    {
        while(!s.empty())
        {
            ll result=a[i]^s.top();
            xormax=max(xormax,result);

            if(a[i]>s.top())
                s.pop();

            else
                break;
            
        }

        s.push(a[i]);
    }
    cout<<xormax;
    return 0;
}