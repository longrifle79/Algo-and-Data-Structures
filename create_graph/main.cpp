//#include <iostream>
//#include "graph/graph.h"
//
//
//
//
//
//
//int main()
//{
//    graph *mygraph = new graph();
//    mygraph->addVertex("A");
//    mygraph->printGraph();
//}

#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

class Graph 
{
private:
    // Number of vertices
    int V;
    // Pointer to adjacency list
    vector<list<int>> adj;

public:
    // Constructor prototype
    Graph(int v);

    // Method to add an edge
    void addEdge(int v, int w);

    // Method for BFS traversal give a source "s"
    void BFS(int s);
};

// Constructer with number of vertices
Graph::Graph(int v) {
    // Set number of verticest
    V = v;

    // Resize the number of adjacency lists
    adj.resize(v);
}

// Implementation of method to add edges
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
}

// Perform BFS given a starting vertex
void Graph::BFS(int s) 
{
    // Start with all vertices as not visited
    // Value initialized to false
    vector<bool> visited(V);

    // Create a queue for BFS
    list<int> queue;

    // Starting vertex marked as visited and added to queue
    visited[s] = true;
    queue.push_back(s);

    // Continue until queue is empty
    while (!queue.empty()) 
    {
        // Get the front of the queue and remove it
        s = queue.front();
        queue.pop_front();
        cout << "node: " << s << " touches nodes: ";
        // Get all adjacent vertices from that vertex
        //cout << "Checking adjacent vertices for vertex " << s << endl;

        for (   std::list<int>::iterator it = adj[s].begin(); 
                it != adj[s].end(); 
                ++it
            )
        {
            //int i = *it;
            //cout << " the i value is: " << *it << endl;
            cout << *it << ", ";
            // We only care about nodes not visited yet
            if (!visited[*it]) 
            {
                // Mark as visited
                //cout << "Visit and enqueue " << *it << endl;
                visited[*it] = true;
                // Push back to check this vertex's vertices
                queue.push_back(*it);
            }
        }
        cout << endl;
    }
}

int main() 
{
    // Create a new graph
    Graph g(6);

    // Create some edges to the vertices
    // Connections for vertex 0
    g.addEdge(0, 1);
    g.addEdge(0, 2);

    // Connections for vertex 1
    g.addEdge(1, 0);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    // Connections for vertex 2
    g.addEdge(2, 0);
    g.addEdge(2, 4);

    // Connections for vertex 3
    g.addEdge(3, 1);
    g.addEdge(3, 4);
    g.addEdge(3, 5);

    // Connections for vertex 4
    g.addEdge(4, 1);
    g.addEdge(4, 2);
    g.addEdge(4, 3);
    g.addEdge(4, 5);

    // Connections for vertex 5
    g.addEdge(5, 3);
    g.addEdge(5, 4);

    // Perform BFS and print result
    g.BFS(0);

    return 0;
}
