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
        int n,m,k;
        cin>>n>>m>>k;
        int cpp=n/k;
        if(m==0)
            cout<<"0\n";
        else if(m<=cpp)
            cout<<m<<"\n";
        else
        {
            m-=cpp;
            k--;
            int t;
            if(m%k==0)
                t=m/k;
            else
            {
                t=(m/k)+1;
            }
            cout<<cpp-t<<"\n";
            
        }
        
        
    }

    return 0;
}