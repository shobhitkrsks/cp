#include <bits/stdc++.h>
using namespace std;

/* bool dfs(int i, int j, int n, int maxLevel, bool visited[][50], vector<vector<int>> &grid)
{
    if(i<0 || j<0 || i>=n || j>=n || visited[i][j] || grid[i][j]>maxLevel)
        return false;

    if(i==n-1 && j==n-1)
        return true;

    visited[i][j]=true;

    return dfs(i-1, j, n, maxLevel, visited, grid) || dfs(i+1, j, n, maxLevel, visited, grid) || dfs(i, j-1, n, maxLevel, visited, grid) || dfs(i, j+1, n, maxLevel, visited, grid);
}

int swimInWater(vector<vector<int>> &grid)
{
    int n=grid.size();
    int l=2*(n-1), r=(n*n)-1;

    while(l<=r)
    {
        int mid=(l+r)/2;
        bool visited[50][50];
        memset(visited, 0, sizeof(visited));

        if(dfs(0,0, n, mid, visited, grid))
            r=mid-1;
        else
            l=mid+1;
    }

    return l;
} */

struct Node {
    int cost, r, c;

    Node(int cost, int r, int c)
    {
        this->cost=cost;
        this->r=r;
        this->c=c;
    }

    bool operator<(const Node& node) const
    {
        return (this->cost > node.cost);
    }

    
};

bool inline isWithinBounds(int r, int c, int n)
{
    if(r>=0 && r<n && c>=0 && c<n)
        return true;

    return false;
}

int swimInWater(vector<vector<int>> &grid)
{
    int n=grid.size();
    priority_queue<Node> pq;
    bool visited[n][n];
    visited[0][0]=1;
    memset(visited, 0, sizeof(visited));
    int ans=-1;
    Node node1 = Node(grid[0][0], 0, 0);
    pq.push(node1);
    int i,j;

    while(!pq.empty())
    {
        Node node = pq.top();
        pq.pop();

        i=node.r;j=node.c;
        ans=max(ans, node.cost);
        visited[i][j]=true;

        if(visited[n-1][n-1])
            return ans;

        if(isWithinBounds(i-1,j,n) && !visited[i-1][j])
            pq.push(Node(grid[i-1][j], i-1, j));

        if(isWithinBounds(i+1,j,n) && !visited[i+1][j])
            pq.push(Node(grid[i+1][j], i+1, j));

        if(isWithinBounds(i,j-1,n) && !visited[i][j-1])
            pq.push(Node(grid[i][j-1], i, j-1));

        if(isWithinBounds(i,j+1,n) && !visited[i][j+1])
            pq.push(Node(grid[i][j+1], i, j+1));
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    int t;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            grid[i][j] = t;
        }
    }

    cout << swimInWater(grid);

    return 0;
}