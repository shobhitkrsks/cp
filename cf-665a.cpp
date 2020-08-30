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
        int n,k;
        cin>>n>>k;

        if(k!=0)
            cout<<abs(k-n)<<"\n";
        else if(k==0)
        {
            if(n>1)
                cout<<"0\n";
            else
                cout<<abs(2-n)<<"\n";
        }
    }

    return 0;
}