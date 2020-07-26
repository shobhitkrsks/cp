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
        ll a,b,n;
        cin>>a>>b>>n;

        int t;
        if(a>=b)
            t=1;
        else
        {
            t=0;
        }
        
        int count=0;
        bool flag=true;
        while(flag)
        {
            if(t%2==0)
            {
                a+=b;
            }
            else
            {
                b+=a;
            }
            t++;
            count++;

            if(a>n || b>n)
                flag=false;
        }

        cout<<count<<"\n";
    }

    return 0;
}