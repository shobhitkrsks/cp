#include <bits/stdc++.h>
using namespace std;

/* int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
{
    int n=nums.size();
    int count=0;

    for(int i=0;i<n;i++)
    {
        int curmax=-1;
        for(int j=i;j<n;j++)
        {
            if(nums[j]>right)
                break;

            curmax=max(curmax,nums[j]);

            if(curmax>=left && curmax<=right)
            {
                count++;
            }
        }
    }

    return count;
} */

int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
{
    int n=nums.size();
    int count=0, bucket1=0, bucket2=0;

    for(int i=0;i<n;i++)
    {
        nums[i]<left?count-=(++bucket1):bucket1=0;
        nums[i]<=right?count+=(++bucket2):bucket2=0;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    int left, right;
    cin>>left>>right;

    cout <<numSubarrayBoundedMax(v,left,right);

        return 0;
}