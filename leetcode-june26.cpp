#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countSmaller(vector<int> &nums)
    {
        int n=nums.size();
        set<int> s;
        vector<int> res;

        for(int i=n-1;i>=0;i--)
        {
            s.insert(nums[i]);
            res.push_back(distance( s.begin(), s.lower_bound(nums[i])));
        }

        reverse(res.begin(), res.end());

        return res;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        nums.push_back(t);
    }

    Solution solution;
    vector<int> vec = solution.countSmaller(nums);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}