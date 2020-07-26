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
        int t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(i%2==0)
                cout<<abs(t)<<" ";
            else
            {
                cout<<-abs(t)<<" ";
            }
            
        }
        cout<<"\n";
    }

    return 0;
}