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
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        
        vector<int> pos;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                pos.push_back(i);
        }
        int count=0;
        if(pos.empty())
        {
            count=ceil((double)n/(double)(k+1));
        }
        else
        {
            int l=pos.size();
            if(pos[0]>=k+1)
                count+=pos[0]/(k+1);

            for(int i=1;i<l;i++)
            {
                int l=pos[i-1],r=pos[i];
                while(r-l>2*k+1)
                {
                    count++;
                    l=l+k+1;
                }
            }

            count+=(n-1-pos[l-1])/(k+1);
        }
        cout<<count<<"\n";
        
        

    }

    return 0;
}