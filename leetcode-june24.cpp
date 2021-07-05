#include<bits/stdc++.h>
using namespace std;
#define P 1000000007

class Solution {
public:
    long long dp[50][50][51];

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof(dp));

        return dfs(m,n, maxMove, startRow, startColumn)%P;
    }

    long long dfs(int m, int n, int maxMoves, int curRow, int curCol)
    {
        if(curRow<0 || curRow==m || curCol<0 || curCol==n)
            return 1;

        if(maxMoves==0)
            return 0;

        if(dp[curRow][curCol][maxMoves]>=0)
            return dp[curRow][curCol][maxMoves];

        dp[curRow][curCol][maxMoves] = (dfs(m, n, maxMoves-1, curRow-1, curCol)%P + dfs(m, n, maxMoves-1, curRow+1, curCol)%P + dfs(m, n, maxMoves-1, curRow, curCol-1)%P + dfs(m, n, maxMoves-1, curRow, curCol + 1)%P)%P;

        return dp[curRow][curCol][maxMoves];
    }
};

int main()
{
    int m,n, maxMoves, startRow, startCol;
    cin>>m>>n>>maxMoves>>startRow>>startCol;

    Solution solution;
    cout<<solution.findPaths(m,n,maxMoves, startRow, startCol);


    
    return 0;
}