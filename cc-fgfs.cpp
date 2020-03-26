//tle
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;

struct Customer
{
    long arr,dep,pref;
    Customer(long a,long d, long p)
    {
        arr=a;
        dep=d;
        pref=p;
    }
};

bool compfun(Customer c1, Customer c2)
{
    return c1.dep<c2.dep;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long k;
        cin>>n>>k;
        
        vector<Customer> v;
        for(int i=0;i<n;i++)
        {
            long a,d,p;
            cin>>a>>d>>p;
            Customer c(a,d,p);
            v.push_back(c);
        }

        sort(v.begin(),v.end(),compfun);
        
        long dep[k];
        memset(dep,0,sizeof(dep));
        long count=0;

        vector<Customer>::iterator itr;
        for(itr=v.begin();itr!=v.end();++itr)
        {
            if(itr->arr>=dep[itr->pref-1])
            {
                count++;
                dep[itr->pref-1]=itr->dep;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}