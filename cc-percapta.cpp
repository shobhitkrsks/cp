#include<iostream>
#include<bits/stdc++.h>
#include<list>
#define ll long long
using namespace std;

class Graph 
{ 
    int V;    // No. of vertices 
  
    // Pointer to an array containing adjacency 
    // lists 
    list<int> *adj;    
public: 
    Graph(int V);  // Constructor 
  
    // function to add an edge to graph 
    void addEdge(int v, int w);  
  
    // prints BFS traversal from a given source s 
    vector<int> BFS(int s);   
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); // Add w to v’s list. 
} 
  
vector<int> Graph::BFS(int s) 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Create a queue for BFS 
    list<int> queue; 
  
    // Mark the current node as visited and enqueue it 
    visited[s] = true; 
    queue.push_back(s); 
  
    // 'i' will be used to get all adjacent 
    // vertices of a vertex 
    list<int>::iterator i; 
    vector<int> result;
  
    while(!queue.empty()) 
    { 
        // Dequeue a vertex from queue and print it 
        s = queue.front(); 
        // cout << s << " "; 
        result.push_back(s);
        queue.pop_front(); 
  
        // Get all adjacent vertices of the dequeued 
        // vertex s. If a adjacent has not been visited,  
        // then mark it visited and enqueue it 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;

        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];

        int gr[n][n];
        memset(gr,0,sizeof(gr));
        int u,v;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            u--;v--;
            gr[u][v]=1;
        }

        double max=INT32_MIN;
        double pci;
        vector<int> maxi;
        for(int i=0;i<n;i++)
        {
            pci=(double)a[i]/(double)b[i];
            if(pci>max)
            {
                max=pci;
                maxi.clear();
                maxi.push_back(i);
            }
            else if(pci==max)
            {
                maxi.push_back(i);
            }
        }

        Graph g(n);
        for(auto i:maxi)
        {
            for(auto j:maxi)
            {
                if(gr[i][j])
                    g.addEdge(i,j);
            }
        }

        // vector<int> result;
        // while(!maxi.empty())
        // {
        //     vector<int> temp=g.BFS(maxi[0]);
        //     if(temp.size()>result.size())
        //         result=temp;
            
        //     vector<int>::iterator it;
        //     for(auto i:temp)
        //     {
        //         it=find(maxi.begin(),maxi.end(),i);
        //         maxi.erase(it);
        //     }
        // }

        vector<int> result;
        for(auto i:maxi)
        {
            vector<int> temp=g.BFS(i);
            if(temp.size()>result.size())
                result=temp;   
        }

        cout<<result.size()<<"\n";
        for(auto i:result)
            cout<<i+1<<" ";

        cout<<"\n";
        

    }

    return 0;
}