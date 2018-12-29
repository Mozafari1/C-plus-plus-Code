#pragma once
#include <vector>
#include<iostream>
using namespace std;

// datastrukur for å lage graf edges

struct Edge
{
	int src, dest;
};
// klasse for å representere en graf objekt
class Graph
{
public:
	// konstrukt en vektor av vektorer for å representere en adjanny list
	vector<vector<int>>adj_list;
	// Graf konstroktor
	Graph(vector<Edge>const &edges, int N) {
		// Endere størrelsen til vektoren til N elements av typen vektor<int>
		adj_list.resize(N);
		// Legge edges til rettet graf
		for (auto &edge : edges) {
			// legg på slutten 
			adj_list[edge.src].push_back(edge.dest);
			// til urettet grf
			//adj_list[edge.dest].push_back(edge.src);
		}
	}

};

// print adjancy list representasjon av graf
void printGraph(Graph const & graph, int N) {
	for (int i = 0; i < N; ++i) {
		// print nåverenede verteks nummer
		cout << i << " ----> ";
		//print all nabo verteksene av verteks i
		for (int v : graph.adj_list[i])
			cout << v << " ";
		cout << endl;
	}
}
