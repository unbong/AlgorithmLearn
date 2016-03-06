#include "HeapDemos.h"
#include <stdlib.h>
#include "HeapDS.h"


HeapDemos::HeapDemos()
{
}


HeapDemos::~HeapDemos()
{
}

HeapDS * HeapDemos::buildHeap(int arrData[], int n)
{ 
	HeapDS * result = new HeapDS(n,1);
	for (int i = 0; i < n; i++) {
		result->arrayd[i] = arrData[i];
	}
	result->count = n;
	for (int i = (n - 1) / 2; i >= 0; i--) {
		percolateDown(result,i);
	}

	return result;
}

void HeapDemos::percolateDown(HeapDS * heap, int i)
{
	int right, left, temp, max;
	right = rightChild(heap, i);
	left = leftChild(heap, i);
	if (right == -1&& left ==-1) {
		return;
	}
	if (left!=-1 &&heap->arrayd[left]>heap->arrayd[i]) {
		max = left;
	}
	else {
		max = i;
	}
	if (right != -1 && heap->arrayd[right]>heap->arrayd[max]) {
		max = right;
	}
	if (max != i) {
		temp = heap->arrayd[max];
		heap->arrayd[max] = heap->arrayd[i];
		heap->arrayd[i] = temp;
		percolateDown(heap, max);
	}
	
	
}
int HeapDemos::deleteMax()
{
	if (heapData->count==0) {
		return -1;
	}
	int data = heapData->arrayd[0];
	heapData->arrayd[0] = heapData->arrayd[heapData->count - 1];
	heapData->count--;
	percolateDown(heapData, 0);
	return data;
}
int HeapDemos::insertNewData(int data)
{
	if (heapData->count==heapData->capacity) {
		 realloc(heapData->arrayd ,sizeof(int) * heapData->capacity * 2);
	}
	heapData->arrayd[++heapData->count] = data;
	//printf("\n capacity:%d",heapData->capacity);
	int i = heapData->count - 1;
	while (i > 0 && data>heapData->arrayd[(i-1)/2]) {
		heapData->arrayd[i] = heapData->arrayd[(i - 1) / 2];
		i = (i - 1) / 2;
	}
	heapData->arrayd[i] = data;
	return 0;
}
int HeapDemos::heapSort(int arr[], int n)
{
	
	HeapDS * heapData = buildHeap(arr, n);
	int i, temp;
	
	//while (heapData->count>=0) {
	//	int firstNode = heapData->arrayd[0];
	//	heapData->arrayd[0] = heapData->arrayd[heapData->count - 1];
	//	heapData->count--;

	//	percolateDown(heapData,0);
	//	printf("%d,",firstNode);

	//}
	int old_size = heapData->count;
	for (int i = n - 1; i > 0; i--) {
		temp = heapData->arrayd[0];
		heapData->arrayd[0] = heapData->arrayd[heapData->count - 1];
		heapData->arrayd[0] = temp;
		heapData->count--;
		percolateDown(heapData, i);
	}
	heapData->count = old_size;
	return 0;
}
//left child index
int HeapDemos::leftChild(HeapDS * heap, int i)
{	
	int result = 2 * i + 1;
	if (result >= heap->count) {
		return -1;
	}
	return result;
}
//left child index
int HeapDemos::rightChild(HeapDS * heap, int i)
{
	int result = 2 * i + 2;
	if (result>=heap->count) {
		return -1;
	}
	return result;
}

int HeapDemos::parent(HeapDS * heap, int i)
{
	int result = (i - 1) / 2;
	if (i<=0 || i>heap->capacity) {
		return -1;
	}
	return result;
}
