#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ar[1000010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    memset(ar,0,sizeof(ar));
    for(int i=a;i<=b;i++)
    {
        ar[a+b]++;
        ar[a+c+1]--;
    }

    for(int i=a+b;i<=b+c+1;i++)
        ar[i]+=ar[i-1];

    ll sum=0;
    for(int i=c;i<=b+c+1;i++)
        sum+=ar[i+1];

    cout<<sum<<"\n";

    return 0;
}