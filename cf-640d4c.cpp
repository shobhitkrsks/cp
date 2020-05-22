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
        ll n,k;
        cin>>n>>k;

        ll result=k+(k-1)/(n-1);
        cout<<result<<"\n";
    }
    //1 2 3 4 5 6 7 8 9 10
    //1 2 4 5 7 8 10
    //1 2 3 5 6 7 9 10 11 13 14 15 17 18
    //1 3 5 7 9 11 13 15
    //123456789
    return 0;
}