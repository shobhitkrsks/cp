#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());

    int cur=nums[0];
    int maxlen=1,overallmax=1;

    int n=nums.size();

    for(int i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1]+1)
            maxlen++;
        else
        {
            overallmax=max(maxlen,overallmax);
            maxlen=1;
        }
    }

    overallmax=max(maxlen,overallmax);

    return overallmax;

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

    cout<<longestConsecutive(v)<<"\n";
    // longestConsecutive(v);


    return 0;
}