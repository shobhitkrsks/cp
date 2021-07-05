#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        int E = edges.size();
        int N = E+1;
        int parent[N];

        for(int i=0;i<N;i++)
            parent[i]=i;

        for(int i=0;i<E;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];

            if(find(u, v, parent))
            {
                return vector<int> {u,v};
            }
            else
            {
                makeunion(u,v, parent);
            }
        }

        return vector<int> {0,0};
    }

    bool find(int u, int v, int parent[])
    {
        if(findroot(u, parent)==findroot(v, parent))
            return true;

        return false;
    }

    int findroot(int v, int parent[])
    {
        while(parent[v]!=v)
        {
            v=parent[v];
        }

        return v;
    }

    void makeunion(int u, int v, int parent[])
    {
        int rootu = findroot(u, parent);
        int rootv = findroot(v, parent);

        parent[rootv] = rootu;
    }
};


int main()
{
    int E;
    cin>>E;

    int u,v;
    vector<vector<int>> edges;

    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        edges.push_back(vector<int> {u,v});
    }

    Solution solution;
    vector<int> vec = solution.findRedundantConnection(edges);
    cout<<vec[0]<<" "<<vec[1];

    return 0;
}