#include "GraphDS.h"

GraphDS_ADJmatrix::GraphDS_ADJmatrix() {

}

GraphDS_ADJmatrix::GraphDS_ADJmatrix(int pv, int pe) {
	V = pe;
	E = pe;
	adj = new int *[V];
	for (int i = 0; i<V; i++) {
		adj[i] = new int[V];
	}
}
//
GraphDS_ADJmatrix::~GraphDS_ADJmatrix() {
	for (int i = 0; i<V; i++) {
		delete[] adj[i];
	}
	delete[] adj;
}


GraphDS_ADJList::GraphDS_ADJList() {

}

GraphDS_ADJList::GraphDS_ADJList(int pv, int pe) {
	V = pv;
	E = pe;
	adj = new int[V];
}

GraphDS_ADJList::~GraphDS_ADJList() {
	free(adj);
}

GraphDS_AJDListNode::GraphDS_AJDListNode()
{
}

GraphDS_AJDListNode::GraphDS_AJDListNode(int pv)
{
	vetex = pv;
	nextNode = NULL;
}

GraphDS_AJDListNode::GraphDS_AJDListNode(int pv, int pdistance)
{
	vetex = pv;
	distance = pdistance;
	nextNode = NULL;
}

GraphDS_AJDListNode::~GraphDS_AJDListNode()
{
}
