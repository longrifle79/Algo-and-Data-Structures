#include "graph.h"




bool graph::addVertex(string vertex)
{
	if (adjList.count(vertex) == 0)
	{
		adjList[vertex];
		return true;
	}
	return false;
}

void graph::printGraph()
{
	for (auto [vertex, edges] : adjList)
	{
		cout << vertex << ": [ ";
		for (auto edge : edges)
		{
			cout << edge << " ";
		}
		cout << "]" << endl;
	}
}

void graph::printGraph2()
{
	for (unordered_map<string, unordered_set<string>>::iterator it = adjList.begin(); it != adjList.end(); ++it)
	{
		cout << it->first << ": [ ";
		for (unordered_set<string>::iterator setIt = it->second.begin(); setIt != it->second.end(); ++setIt)
		{
			cout << *setIt << " ";
		}
		cout << "]" << endl;
	}
}
graph::graph()
{

}