#include <bits/stdc++.h>
using namespace std;

int maxResult(vector<int> &nums, int k)
{
    int n = nums.size();
    int maxscore[n];

    maxscore[0] = nums[0];

    multiset<int, greater<int>> s;
    maxscore[0] = nums[0];
    s.insert(nums[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.size() > k)
        {
            s.erase(s.find(maxscore[i - k - 1]));
        }

        maxscore[i] = nums[i] + *(s.begin());
        s.insert(maxscore[i]);
    }

    return maxscore[n - 1];
}

int main()
{
    int n, k;
    cin >> n;
    vector<int> v;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    cin >> k;

    cout << maxResult(v, k) << "\n";
    // longestConsecutive(v);

    return 0;
}