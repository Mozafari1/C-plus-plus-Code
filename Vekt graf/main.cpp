#include"Header.h"

int main() {
	vector<Edge> edges =
	{
	
		{0,1,15},{1,2,13},{2,0,5},{2,1,17},{3,2,4},{4,5,10},{5,4,9},{6,7,2},{7,0,1},{0,8,3},{8,2,6}
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