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
        ll n;
        cin>>n;

        switch(n%2)
        {
            case 1:
                cout<<n/2<<"\n";break;
            case 0:
                ll t= n & (~(n-1));
                cout<<(n/t)/2<<"\n";
                break;
        }
    }
    return 0;
}