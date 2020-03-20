#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() 
{
    int n;
    cin>>n;
    int ar[n];
    int lis[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        lis[i]=1;
    }
    
    int maxamount=1;
    vector<vector<int>> v(n);
    vector<int> maindex;
    
    
    for(int i=0;i<n;i++)
    {
        vector<int> current;
        
        for(int j=0;j<i;j++)
        {
            if(ar[i]>ar[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[j]+1;
                v[i]=v[j];
            }
        }


        v[i].push_back(i);
        
        
        if(v[i].size()>maxamount)
        {
            maxamount=v[i].size();
            maindex.clear();
            maindex.push_back(i);
        }
        else if(v[i].size()==maxamount)
        {
            maindex.push_back(i);
        }
    }
    
    int marked[n];
    memset(marked,0,sizeof(marked));
    
    vector<int>::iterator x;
    for(x=maindex.begin();x!=maindex.end();++x)
    {
        vector<int> tbp=v[*x];
        
        vector<int>::iterator i; 
        for(i=tbp.begin();i!=tbp.end();++i)
        {
            if(marked[*i]!=1)
                marked[*i]=1;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<lis[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<marked[i]<<" ";
    }
        
    return 0;
}