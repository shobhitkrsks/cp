#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        // vector<vector<int>> ans {{1}};

        // if(numRows==1)
        //     ans;

        // int r=numRows;
        // int ar[r+1][2*numRows];
        // memset(ar,0, sizeof(ar));

        // ar[1][r]=1;

        // for(int i=2;i<=r;i++)
        // {
        //     vector<int> temp;
        //     for(int j=r-(i-1);j<=r+(i-1);j+=2)
        //     {
        //         ar[i][j] = ar[i-1][j-1]+ar[i-1][j+1];
        //         temp.push_back(ar[i][j]);
        //     }
        //     ans.push_back(temp);
        // }

        // return ans;

        vector<vector<int>> ans {{1}};

        if(numRows==1)
            return ans;

        int r=numRows;
        int ar[numRows+1][2*numRows+1];
        memset(ar,0, sizeof(ar));

        ar[1][r]=1;

        for(int i=2;i<=r;i++)
        {
            vector<int> temp;
            for(int j=r-(i-1);j<=r+(i-1);j+=2)
            {
                ar[i][j] = ar[i-1][j-1]+ar[i-1][j+1];
                temp.push_back(ar[i][j]);
            }
            ans.push_back(temp);
        }

        return ans;

        /* for(int i=0;i<=r;i++)
        {
            for(int j=0;j<=c;j++)
            cout<<ar[i][j]<<"\t";

            cout<<"\n";
        } */
    }
};

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v;
    vector<int> temp;

    Solution solution;
    v = solution.generate(n);

    for(auto i: v)
    {
        for(auto j: i)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}