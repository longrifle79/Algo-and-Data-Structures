#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class graph
{
public:
	graph();
	bool addVertex(string vertex);
	void printGraph();
	void printGraph2();

private:
	unordered_map<string, unordered_set<string>> adjList;
};

#endif


