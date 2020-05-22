#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(12);
    double pi=2*acos(0.0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        
        int n;
        cin>>n;
        double t=pi/(2*(double)n);
        // cout<<t<<"\n";

        double val=tan(t);
        double res=1/val;
        cout<<res<<"\n";
    }

    return 0;
}