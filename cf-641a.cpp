#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    
    ll s=(ll)sqrt(n);
    for (ll i = 5; i <=s; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
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
        ll n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n+2*k<<"\n";
        }
        else
        {
            bool pr=isPrime(n);
            if(pr)
            {
                cout<<n+n+2*(k-1)<<"\n";
            }
            else
            {
                ll fac;
                for(int i=2;i<=n/2+1;i++)
                {
                    if(n%i==0)
                    {
                        fac=i;
                        break;
                    }
                }
                cout<<n+fac+2*(k-1)<<"\n";
            }
        }
    }

    return 0;
}