#pragma once
#include <vector>
#include <iostream>
using namespace std;


// datastrukur for å lage graf edges

struct Edge
{
	int src, dest, weight;
};
typedef pair<int, int> Pair;
// klasse for å representere en graf objekt
class Graph
{
public:
	// konstrukt en vektor av vektorer av Pairs for å representere en adjanny list
	vector<vector<Pair>>adj_list;
	// Graf konstroktor
	Graph(vector<Edge>const &edges, int N) {
		// Endere størrelsen til vektoren til N elements av typen vektor<int>
		adj_list.resize(N);
		// Legge edges til rettet graf
		for (auto &edge : edges) {
			int src = edge.src; 
			int dest = edge.dest;
			int weight = edge.weight;
			// legg på slutten 
			adj_list[edge.src].push_back(make_pair(dest, weight));
			// til urettet grf
			//adj_list[dest].push_back(make_pair(src, weight));
		}
	}

};

// print adjancy list representasjon av graf
void printGraph(Graph const & graph, int N) {
	for (int i = 0; i < N; ++i) {
		//print all nabo verteksene av gitte verteks
		for (Pair v : graph.adj_list[i])
			cout << "(" << i << ", " << v.first << ", " << v.second << ") ";
		cout << endl;
	}
}
