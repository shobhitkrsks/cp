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
        string s;
        cin>>s;

        int n;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];

        int l=s.length();

        int freq[26];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<l;i++)
        {
            freq[s[i]-'a']++;
        }

        int lc=25;
        int done=0;
        char res[n];

        while(done<n)
        {
            vector<int> idx;

            for(int i=0;i<n;i++)
            {
                if(ar[i]==0)
                {
                    idx.push_back(i);
                }
            }
            int z=idx.size();

            bool found=false;
            int li;
            for(;lc>=0 && !found;lc--)
            {
                if(freq[lc]>=z)
                {
                    found=true;
                    li=lc;
                }
            }

            for(int i=0;i<z;i++)
            {
                res[idx[i]]='a'+li;
                ar[idx[i]]=-1;
            }

            for(int i=0;i<z;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(ar[j]!=-1)
                    {
                        ar[j]-=idx[i];
                    }
                }
            }

            done+=z;
        }



    }

    return 0;
}