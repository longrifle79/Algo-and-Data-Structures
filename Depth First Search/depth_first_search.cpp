#include "depth_first_search.h"

// Constructer with number of vertices
Graph::Graph(int v) 
{
    // Set number of vertices
    V = v;
    // this creates an adjacency list
    // this is an array of size "v" 
    // and each element in the array 
    // holds a std::list<int>
    adj = new list<int>[v];
}

// Implementation of method to add edges
void Graph::addEdge(int v, int w) 
{
    adj[v].push_back(w);
}






























void Graph::DFS_helper(int s, bool *visited) 
{
    // Mark the current node as visited
    cout << "Visiting node " << s << endl;
    visited[s] = true;
    // Go through the adjacency list
    for (auto i = adj[s].begin(); i != adj[s].end(); i++) 
    {
        // If not visited, travel through that vertex
        if (!visited[*i]) 
        {
            cout << "Going to vertex " << *i << " from vertex " << s << endl;
            DFS_helper(*i, visited);
        }
    }
}

// Perform BFS given a starting vertex
void Graph::DFS(int s) 
{
    // Start with all vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++) 
    {
        visited[i] = false;
    }
    // Beginning of recursive call
    DFS_helper(s, visited);
}



