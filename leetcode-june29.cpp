#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int localMax=0;
        int globalMax=0;
        int left=0, right=0;
        int cur0=0;

        while(right<n)
        {
            if(nums[right]==1)
            {
                right++;
                localMax++;
                globalMax=max(globalMax,localMax);
            }
            else
            {
                if(cur0<k)
                {
                    right++;
                    cur0++;
                    localMax++;
                    globalMax=max(globalMax,localMax);
                }
                else
                {
                    if(nums[left]==0)
                    {
                        cur0--;
                    }

                    localMax--;
                    left++;
                }
            }
        }

        return globalMax;
        
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        nums.push_back(t);
    }

    int k;
    cin>>k;

    Solution solution;
    cout<<solution.longestOnes(nums, k);


    
    return 0;
}