#pragma once

#include <stdio.h> 
#include <queue>
#include "GraphDS.h"
#include <typeinfo>

using namespace std;
class GraphDemos
{
public:
	GraphDemos();
	~GraphDemos();

	GraphDS_ADJmatrix * createGraphAdjMatrix();

	GraphDS_ADJList * createGraphAdjList();
	//dfs
	void DFSMatrix(GraphDS_ADJmatrix * graph, int v, int * visted);
	void DFSMatrixTraver(GraphDS_ADJmatrix * graph);
	//bfs
	void BFSMatrix(GraphDS_ADJmatrix * graph, int v, int * visted);
	void BFSMatrixTraver(GraphDS_ADJmatrix * graph);

	void BFSListTraver(GraphDS_ADJList * graph);

	queue<int> topoLogicalSort(GraphDS_ADJList * graph);

	int* unWeightedShorestPath(GraphDS_ADJList * G, int s);
	int * DjistraAlgo(GraphDS_ADJList * graph,int s);
};

