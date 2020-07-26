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
        unsigned int n;
        cin>>n;
        unsigned int r=0;
        
        int b=sizeof(n)*8;

        for(int i=0;i<b;i++)
        {
            int temp=n&(1<<i);
            if(temp)
                r=r|1<<(b-1-i);
        }

        cout<<r<<"\n";
    }

    return 0;
}