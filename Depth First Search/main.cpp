#include <iostream>
#include <list>
#include "depth_first_search.h"

using namespace std;

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

    // Perform DFS and print result
    g.DFS(0);

    return 0;
}