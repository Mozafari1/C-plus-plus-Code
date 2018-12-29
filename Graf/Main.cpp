#include "Header.h"
int main() {
	vector<Edge> edges=
	{
		{0,1},{1,2},{2,0},{2,1},{3,2},{4,5},{5,4},{6,7},{7,0},{0,8},{8,2}
	};
	// nummer av noder i graf
	int N = 9;

	// konstrukt graf
	Graph graph(edges, N);
	//print adjancy list represenasjon av graf
	printGraph(graph, N);
	system("pause");
	return 0;

}