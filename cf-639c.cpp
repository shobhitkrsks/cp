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
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        bool occ[n];
        memset(occ,0,sizeof(occ));

        for(int i=0;i<n;i++)
        {
            occ[(((i+ar[i])%n)+n)%n]=1;
            // cout<<"marked:"<<((i+ar[i]%n)+n)%n<<endl;

        }

        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(occ[i]==0)
            {
                flag=false;
                break;
            }
        }

        if(flag)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }

    return 0;
}