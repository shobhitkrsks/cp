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
        int n,k;
        cin>>n>>k;
        int ar[n];
        vector<int> index;
        int pref[n+1];
        memset(pref,0,sizeof(pref));
        stack<int> s;
        int t;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        for(int i=1;i<n-1;i++)
        {
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
                index.push_back(i);
        }

        for(auto i:index)
        {
            if(i-k+2>=0)
            {
                pref[i-k+2]++;
            }
            else
            {
                pref[0]++;
            }
            
                pref[i]--;
        }

        int max=pref[0],left=0;
        for(int i=1;i<n;i++)
        {
            pref[i]+=pref[i-1];
            if(pref[i]>max)
            {
                max=pref[i];
                left=i;
            }
        }

        cout<<max+1<<" "<<left+1<<endl;
        //comment
    }

    return 0;
}