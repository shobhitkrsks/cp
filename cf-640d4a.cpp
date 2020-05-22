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
        int t=n;
        int count=0;
        while(t!=0)
        {
            if(t%10!=0)
                count++;
            t/=10;
        }
        cout<<count<<"\n";

        int i=0;
        t=n;
        while(t!=0)
        {
            if(t%10!=0)
                cout<<(t%10)*pow(10,i)<<" ";

            t/=10;
            i++;
        }
        cout<<"\n";
    }

    return 0;
}