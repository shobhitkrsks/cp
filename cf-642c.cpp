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
        int n;
        cin>>n;

        ll i=(ll)(n+2)/2;
        cout<<(8*i*(i-1)*(2*i-1))/6<<"\n";


    }

    return 0;
}