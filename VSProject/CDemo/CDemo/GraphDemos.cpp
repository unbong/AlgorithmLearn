#include "GraphDemos.h"



GraphDemos::GraphDemos()
{
}


GraphDemos::~GraphDemos()
{
}


GraphDS_ADJmatrix * GraphDemos::createGraphAdjMatrix() {
	int e, v, i, u;
	cout << "Grapg's V";
	cin >> v;
	cout << "Grapg's E";
	cin >> e;
	GraphDS_ADJmatrix * result = new GraphDS_ADJmatrix(v, e);
	for (int i = 0; i<result->V; i++)
		for (int j = 0; j<result->V; j++)
			result->adj[i][j] = 0;
	int uv[] = { 0,1,1,2,1,7,2,3,2,4,4,5,4,6,4,7 };

	for (int i = 0; i<result->E; i++) {
		//        cout << "read Edges u" ;
		//        cin >> u;
		//        cout << "read Edges v" ;
		//        cin >> v;

		result->adj[uv[2 * i]][uv[2 * i + 1]] = 1;
		result->adj[uv[2 * i + 1]][uv[2 * i]] = 1;
	}
	return result;
}

GraphDS_ADJList * GraphDemos::createGraphAdjList() {
	int v, e, x, y, distance;
	
	cout << "Grapg's V";
	cin >> v;
	cout << "Grapg's E";
	cin >> e;
	GraphDS_ADJList * result = new GraphDS_ADJList(v,e);
	GraphDS_AJDListNode * tempx = NULL;
	GraphDS_AJDListNode * tempy = NULL;

	for (int i = 0; i < result->V;i++) {
		result->adj[i] = (int)new GraphDS_AJDListNode(i);
		((GraphDS_AJDListNode*)(result->adj[i]))->entried = 0 ;
		((GraphDS_AJDListNode*)(result->adj[i]))->nextNode = (GraphDS_AJDListNode*)(result->adj[i]);
	}
	// 
	// 用于执照拓扑排序的数据 
	//int arrvtemp[] = {7,11,7,8,5,11,3,8,3,10,11,2,11,9,11,10,8,9};
	// 用于制造最短路径的数据
	//int arrvtemp[] = { 0,1,0,3,1,3,1,4,2,0,2,5,3,5,3,6,4,6,6,5 };
	// 用于执照最短路径的Dijkstra算法的数据
	int arrvtemp [] = { 0,1,4,0,2,1,1,4,4,2,1,2,2,3,4,3,4,4 };
	for (int i = 0; i < result->E; i++) {
		//
		/*cout << "Grapg's x&y";
		cin >> x>>y;*/
		//
		x = arrvtemp[2 * i];
		y = arrvtemp[2 * i + 1];
		// Dijkstra算法而计算 
		distance = arrvtemp[2 * i + 2];
		tempx = new GraphDS_AJDListNode(x);

		//tempy = new GraphDS_AJDListNode(y);
		// Dijkstra算法而计算 
		tempy = new GraphDS_AJDListNode(y, distance);
		// step1 元のノードの次を新ノードの次に埋める
		GraphDS_AJDListNode* next=((GraphDS_AJDListNode*)result->adj[x])->nextNode;
		tempy->nextNode = next;
		// step2 新のーどをｘの次に埋める
		GraphDS_AJDListNode* ppp = (GraphDS_AJDListNode*)result->adj[x];
		ppp->nextNode = tempy;
		// count node entryied 
		int tempEntry = ((GraphDS_AJDListNode*)result->adj[y])->entried;
		tempEntry++;
		((GraphDS_AJDListNode*)result->adj[y])->entried = tempEntry;
		//((GraphDS_AJDListNode*)result->adj[x])->nextNode = tempy;
		
		
	}
	return result;
}

void GraphDemos::DFSMatrix(GraphDS_ADJmatrix * graph, int v, int * visted)
{

	if (v == graph->V) {
		return;
	}
	visted[v] = 1;
	for (int i = 0; i < graph->V; i++) {
		if (!visted[i] && graph->adj[v][i]) {
			DFSMatrix(graph, i, visted);
		}
	}

}
void GraphDemos::DFSMatrixTraver(GraphDS_ADJmatrix * graph)
{
	int * visted = new int[graph->V];
	for (int i = 0; i < graph->V; i++) {
		visted[i] = 0;
	}
	for (int i = 0; i < graph->V; i++) {
		DFSMatrix(graph, i, visted);
	}

	
	for (int i = 0; i < graph->V; i++) {
		printf("%d,", visted[i]);
	}
}

void GraphDemos::BFSMatrix(GraphDS_ADJmatrix * graph, int v, int * visted)
{
	visted[v] = 1;
	queue<int> q1;
	q1.push(v);
	while (!q1.empty()) {
		int  u = q1.front();
		q1.pop();
		for (int y = 0; y < graph->V;y++) {
			if (!visted[u] && graph->adj[v][y]) {
				q1.push(y);
			}
		}
	}
	

}

void GraphDemos::BFSMatrixTraver(GraphDS_ADJmatrix * graph)
{
	int * visted = new int[graph->V];

	for (int i = 0; i < graph->V;i++) {
		visted[i] = 0;
	}

	for (int i = 0; i < graph->V; i++) {
		BFSMatrix(graph, i, visted);
	}
}

void GraphDemos::BFSListTraver(GraphDS_ADJList * graph)
{
	for (int i = 0; i < graph->V; i++) {
		printf("\n");
		GraphDS_AJDListNode* ppp = (GraphDS_AJDListNode*)graph->adj[i];
		GraphDS_AJDListNode* tempppp = ppp;
		printf("The node %d, entryied %d" ,i,ppp->entried);
		printf("\n");
		while (ppp->nextNode != tempppp) {
			GraphDS_AJDListNode* next = ppp->nextNode;
			printf("ppp is %d, next is %d.",ppp->vetex,next->vetex);
			ppp= next;
		}
	}
}

queue<int> GraphDemos::topoLogicalSort(GraphDS_ADJList * graph)
{
	queue<int> result;
	queue<int> temp;
	int counter = 0;
	int * tempEntried = new int[graph->V];
	//将入度为0的节点放入queue中临时村粗
	for (int i = 0; i < graph->V; i++) {
		GraphDS_AJDListNode* currentNode = (GraphDS_AJDListNode*)graph->adj[i];
		if (currentNode->entried ==0) {
			counter++;
			temp.push(i);
		}
		tempEntried[i] = currentNode->entried;
	}
	//从queue中获取节点后进行对邻接节点边的删除操作
	while (!temp.empty()) {
		//当前节点
		int currentVal = temp.front();
		temp.pop();
		result.push(currentVal);
		//获取该节点
		GraphDS_AJDListNode* currentNode = (GraphDS_AJDListNode*)graph->adj[currentVal];
		//该节点的复制
		GraphDS_AJDListNode* currentNodeCopy = currentNode;
		 do  {
			 // 当前结点的邻接节点
			int nextNodeVal = currentNode->nextNode->vetex;
			//节点的入度 -1操作
			tempEntried[nextNodeVal] = tempEntried[nextNodeVal] - 1;
			// 如果邻接节点的入度为0 
			if (tempEntried[nextNodeVal] == 0) {
				temp.push(nextNodeVal);
				// 检查环的计数器
				counter++;
			}
			//当前结点设置为下一个节点
			currentNode = currentNode->nextNode;
		 } while (currentNode->nextNode != currentNodeCopy);
	}
	
	if (counter != graph->V) {
		printf("It has cycle");
		return queue<int>();
	}

	return result;
}

int * GraphDemos::unWeightedShorestPath(GraphDS_ADJList * g, int s)
{
	int * result = new int[g->V];
	queue<int> temp;
	
	for (int i = 0; i < g->V; i++) {
		result[i] = -1;
	}
	result[s] = 0;
	temp.push(s);
	
	while (temp.empty()==false) {
		int currentNode = temp.front();
		temp.pop();

		GraphDS_AJDListNode * curNode = ((GraphDS_AJDListNode *)g->adj[currentNode]);
		GraphDS_AJDListNode * curNodeCopy = curNode;
		int curVal = curNode->vetex;
		
		GraphDS_AJDListNode * curNextNode = curNode->nextNode;
		do {
			if (result[curNextNode->vetex] == -1) {
				result[curNextNode->vetex] = result[currentNode]+1;
				temp.push(curNextNode->vetex);
			}
			curNextNode = curNextNode->nextNode;
		} while (curNodeCopy != curNextNode);
	}
	
	return result;

}

int * GraphDemos::DjistraAlgo(GraphDS_ADJList * graph, int s)
{
	int * result = new int[graph->V];
	int currentVal = 0, distance = 0, temp = 0, adjtaneNode=0;
	int * path = new int[graph->V];
	queue<int> tmpQueue;
	tmpQueue.push(s);
	for (int i = 0; i < graph->V;i++) {
		result[i] = -1;
		if (i==s) {
			result[i] = 0;
		}
	}
	while (!tmpQueue.empty()) {
		//当前的索引
		temp = tmpQueue.front();
		tmpQueue.pop();
		// 现在的节点
		GraphDS_AJDListNode * currentNode = (GraphDS_AJDListNode *)graph->adj[temp];
		GraphDS_AJDListNode * currentNodeCopy = currentNode;
		//当前结点的邻接节点
		GraphDS_AJDListNode * currentNodeNext = currentNode->nextNode;
		do {
			
			//邻接的节点
			int adjtanceNode = currentNodeNext->vetex;
			//原始节点
			int currentNodeIndex = currentNode->vetex;
			// 到达邻接节点的长度
			currentVal = result[currentNodeIndex] + currentNodeNext->distance;
			
			if (result[adjtanceNode] == -1) {
				result[adjtanceNode] = currentVal;
				tmpQueue.push(adjtanceNode);
				path[adjtanceNode] = currentNode->vetex;
			}

			if (result[adjtanceNode]>currentVal) {
				result[adjtanceNode] = currentVal;

				path[adjtanceNode] = currentNode->vetex;
			}
			currentNodeNext = currentNodeNext->nextNode;
		} while (currentNodeNext != currentNodeCopy);
	}

	return result;
}


