#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

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
        int n=s.length();
        string t=s;
        sort(t.begin(),t.end());

        // cout<<s<<" "<<t;

        bool used[n];
        memset(used,0,sizeof(used));

        int sum=0;
        for(int i=0;i<n;i++)
        {
            int smaller=0;
            int maxidx=t.find(s[i]);
            for(int j=0;j<maxidx;j++)
            {
                if(!used[j])
                    smaller++;
            }
            used[maxidx]=1;

            sum+=smaller*fact(n-i-1);
        }

        cout<<sum+1<<endl;
    }

    return 0;
}