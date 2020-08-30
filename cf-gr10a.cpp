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
        int fix;
        cin>>fix;
        int t;
        for(int i=1;i<n;i++)
        {
            cin>>t;
            if(t!=fix)
                flag=false;
        }

        if(flag)
            cout<<n<<"\n";
        else
        {
            cout<<"1\n";
        }
        
    }

    return 0;
}