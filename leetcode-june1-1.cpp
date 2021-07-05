#include <bits/stdc++.h>
using namespace std;


int bfs(int r, int c, vector<vector<int>> &grid, int ROW, int COL)
{
    queue<pair<int, int>> q;
    q.push(make_pair(r, c));
    int area = 1;

    while (!q.empty())
    {
        int curi = q.front().first;
        int curj = q.front().second;

        if (curi>=0 && curj-1>=0 && curi<ROW && curj-1<COL && grid[curi][curj - 1] == 1)
            q.push(make_pair(curi, curj - 1));

        if (curi-1>=0 && curj>=0 && curi-1<ROW && curj<COL &&grid[curi-1][curj] == 1)
            q.push(make_pair(curi-1, curj));

        if (curi>=0 && (curj+1)>=0 && curi<ROW && curj+1<COL && grid[curi][curj + 1] == 1)
            q.push(make_pair(curi, curj + 1));

        if (curi+1>=0 && curj>=0 && curi+1<ROW && curj<COL && grid[curi+1][curj] == 1)
            q.push(make_pair(curi+1, curj));

        area++;
        q.pop();
        grid[curi][curj]=-1;
    }

    return area;
}

int maxAreaOfIsland(vector<vector<int>> &grid)
{
    int maxarea = 0;
    int ROW = grid.size();
    int COL = grid[0].size();

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (grid[i][j] == 1)
            {
                maxarea = max(maxarea, bfs(i, j, grid, ROW, COL));
            }
        }
    }

    return maxarea;
}

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> grid;
    for (int i = 0; i < r; i++)
    {
        vector<int> rowvector;
        int temp;
        for (int j = 0; j < c; j++)
        {
            cin >> temp;
            rowvector.push_back(temp);
        }

        grid.push_back(rowvector);
    }

    cout << maxAreaOfIsland(grid);
}