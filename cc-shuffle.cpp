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
        int ar[n+1];
        ar[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        
        map<int,vector<int>> m;
        for(int i=1;i<=k;i++)
        {
            for(int j=i;j<=n;j+=k)
            {
                m[i].push_back(ar[j]);
            }
        }

        sort(ar,ar+n+1);

        int size[k+1];
        int maxsize=INT_MAX;
        for(int i=1;i<=k;i++)
        {
            sort(m[i].begin(),m[i].end());
            size[i]=m[i].size();
            if(size[i]<maxsize)
                maxsize=size[i];
        }

        vector<int> result;
        for(int i=0;i<maxsize;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(i<=size[j]-1)
                    result.push_back(m[j].at(i));
            }
        }

        bool flag=true;
        vector<int>::iterator itr=result.begin();
        itr++;
        int temp=result[0];
        for(;itr!=result.end();itr++)
        {
            if(*itr<temp)
            {
                flag=false;
                break;
            }
            temp=*itr;
        }

        if(flag)   
            cout<<"yes\n";
        else
        {
            cout<<"no\n";
        }
        
    }

    return 0;
}