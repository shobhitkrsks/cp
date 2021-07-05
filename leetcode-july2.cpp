#include<bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) 
{
    vector<int> res;
    int n=arr.size();

    if(k==n)
        return arr;

    int z=0;

    int left=0, right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;

        if(arr[mid]==x)
        {
            left=mid;
            break;
        }
        else if(arr[mid]<x)
        {
            left=mid;
        }
        else
        {
            right=mid;
        }
    }

    

    if(x>=arr[0] && x<=arr[n-1])
    {
        for(;z<n-1;z++)
        {
            if(arr[z]<=x && arr[z+1]>=x)
                break;
        }
    }
    else if(x>arr[n-1])
        z=n-1;
    

    int left=z,right=z+1;
    int count=0;

    while(left>=0 && right<n && count<k)
    {
        if(abs(arr[left]-x)<=abs(arr[right]-x))
        {
            res.push_back(arr[left--]);
        }
        else if(abs(arr[left]-x)>abs(arr[right]-x))
        {
            res.push_back(arr[right++]);
        }
        count++;
    }

    if(count!=k)
    {
        if(left>=0)
        {
            while(count!=k)
            {
                res.push_back(arr[left--]);
                count++;
            }
        }
    }
    if(count!=k)
    {
        if(right<n)
        {
            while(count!=k)
            {
                res.push_back(arr[right++]);
                count++;
            }
        }

    }

    sort(res.begin(), res.end());

    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;

    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    int k,x;
    cin>>k>>x;

    vector<int> res = findClosestElements(v, k, x);

    for(auto i: res)
        cout<<i<<" ";
    
    return 0;
}