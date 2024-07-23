#ifndef __DEPTH_FIRST_SEARCH_H__
#define __DEPTH_FIRST_SEARCH_H__
#include <iostream>
#include <list>
using namespace std;

class Graph 
{
private:
    // Number of vertices
    int V;
    // Pointer to adjacency list
    list<int>   *adj;
    // DFS recursive helper functions
    void DFS_helper(int s, bool *visited);

public:
    // Constructor prototype
    Graph(int v);

    // Method to add an edge
    void addEdge(int v, int w);

    // Method for BFS traversal give a source "s"
    void DFS(int s);
};
#endif
