#include<iostream>
#include<bits/stdc++.h>
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
        if(n%4!=0)
            cout<<"NO\n";
        else
        {
            /*
            for(int i=2;i<=n/2;i+=2)
            {
                cout<<i<<" ";
            }
            for(int i=(n/2)+1;i<=n+1;i+=2)
            {
                cout<<i<<" ";
            }
            for(int i=1;i<=n/2;i+=2)
            {
                cout<<i<<" ";
            }
            for(int i=(n/2)+2;i<=n+1;i+=2)
            {
                cout<<i<<" ";
            }
            */
            vector<int> even;
            vector<int> odd;
            for(int i=1;i<=n/2;i++)
            {
                if(i%2==1)
                    odd.push_back(i);
                else
                    even.push_back(i); 
            }
            for(int i=(n/2)+2;i<=n+1;i++)
            {
                if(i%2==1)
                    odd.push_back(i);
                else
                    even.push_back(i); 
            }
            cout<<"YES\n";
            for(auto j:even)
                cout<<j<<" ";
            for(auto j:odd)
                cout<<j<<" ";
            cout<<endl;
        }
        

    }

    return 0;
}