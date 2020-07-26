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
        multiset<int> os,es;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0)
                es.insert(ar[i]);
            else
            {
                os.insert(ar[i]);
            }
        }

        // cout<<os.size()<<" "<<es.size()<< " ";
        if(os.size()%2==0)
            cout<<"YES\n";

        else
        {
            sort(ar,ar+n);
            bool found=false;

            for(int i=0;i<n-1 && !found;i++)
            {
                if(ar[i+1]==ar[i]+1)
                    found=true;
            }

            if(found)
                cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        
    }

    return 0;
}