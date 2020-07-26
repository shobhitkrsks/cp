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
        bool flag=true;
        int count=0;

        while(n!=1 && flag)
        {
            if((n%2!=0 && n%3!=0) || (n%2==0 && n%3!=0))
            {
                flag=false;
                break;
            }
            else if(n%2==0 && n%3==0)
            {
                n/=6;
                count++;                
            }
            else if(n%2!=0 && n%3==0)
            {
                n*=2;
                count++;
            }
        }

        if(n==1 && flag)
            cout<<count<<"\n";
        else
            cout<<"-1\n";
        
    }

    return 0;
}